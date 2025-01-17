from transformers import pipeline
from pprint import pprint

# Tải pipeline NER với mô hình BERT-large
ner_pipeline = pipeline("ner", model="dbmdz/bert-large-cased-finetuned-conll03-english", grouped_entities=True)

# Tải pipeline Question Answering với mô hình RoBERTa-large
qa_pipeline = pipeline("question-answering", model="deepset/roberta-large-squad2")

# Hàm trích xuất thông tin
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
    
    # Sử dụng QA để trích xuất sở thích và tính cách
    def get_qa_answer(question, context, name):
        result = qa_pipeline(question=question, context=context)
        # Kiểm tra điểm số và đảm bảo kết quả không chứa tên (nếu name không phải là None)
        if result['score'] < 0.2:  # or (name and name.lower() in result['answer'].lower())
            return None, None
        # Kiểm tra xem kết quả có hợp lý không (ví dụ: không phải là một từ đơn lẻ)
        # if len(result['answer'].split()) == 1:
        #     return None, None
        return result['answer'], result['score']
    
    hobby, hobby_score = get_qa_answer(f"What is {name} hobby or the activity {name} want to do?", text, name)
    preferred_personality, personality_score = get_qa_answer(f"What kind of personality does {name} like?", text, name)
    
    # Trả về kết quả
    return {
        "Name": name,
        "Studies at": organization,
        "Hobby": hobby,
        "Hobby Score": hobby_score,
        "Preferred Personality": preferred_personality,
        "Preferred Personality Score": personality_score
    }

# Danh sách văn bản của nhiều người dùng
user_texts = [
    "My name is An, I study at FPT University, I am interested in basketball, and I like someone who is cheerful and friendly.",
    "My name is John, I study at Harvard University, I like playing football, and I like someone who is kind and intelligent.",
    "My name is Alice, I study at Stanford University, I enjoy reading books, and I like someone who is creative and thoughtful.",
    "My name is An",
]

# Xử lý từng người dùng
for i, text in enumerate(user_texts):
    print(f"Processing user {i+1}...")
    info = extract_info(text)
    pprint(info)
    print()  # In một dòng trống để phân cách