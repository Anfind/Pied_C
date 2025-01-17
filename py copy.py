from transformers import pipeline
from pprint import pprint

ner_pipeline = pipeline("ner", model="dbmdz/bert-large-cased-finetuned-conll03-english", grouped_entities=True)

qa_pipeline = pipeline("question-answering", model="deepset/roberta-large-squad2")

def extract_info(text):
    # Sử dụng NER để trích xuất tên và tổ chức
    ner_results = ner_pipeline(text)
    name = None
    organization = None
    for entity in ner_results:
        if entity['entity_group'] == 'PER':
            name = entity['word']
        elif entity['entity_group'] == 'ORG':
            organization = entity['word']
    
    def get_qa_answer(question, context, name):
        result = qa_pipeline(question=question, context=context)
        if result['score'] < 0.2:  # or (name and name.lower() in result['answer'].lower())
            return None, None
        # if len(result['answer'].split()) == 1:
        #     return None, None
        return result['answer'], result['score']
    
    hobby, hobby_score = get_qa_answer(f"What is {name} hobby or the activity {name} want to do?", text, name)
    preferred_personality, personality_score = get_qa_answer(f"What kind of personality does {name} like?", text, name)
    
    return {
        "Name": name,
        "Studies at": organization,
        "Hobby": hobby,
        "Hobby Score": hobby_score,
        "Preferred Personality": preferred_personality,
        "Preferred Personality Score": personality_score
    }

user_texts = [
    "My name is An, I study at FPT University, I am interested in basketball, and I like someone who is cheerful and friendly.",
    "My name is John, I study at Harvard University, I like playing football, and I like someone who is kind and intelligent.",
    "My name is Alice, I study at Stanford University, I enjoy reading books, and I like someone who is creative and thoughtful.",
    "My name is An",
]

for i, text in enumerate(user_texts):
    print(f"Processing user {i+1}...")
    info = extract_info(text)
    pprint(info)
    print()  # In ddeepj