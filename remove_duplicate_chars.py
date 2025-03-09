def remove_duplicate_chars(input_string):
    """
    Remove duplicate characters from a string while preserving the order of first occurrence.
    
    Args:
        input_string (str): The input string to remove duplicates from
        
    Returns:
        str: String with duplicate characters removed
    """
    # Use a dictionary to keep track of seen characters
    seen = {}
    result = []
    
    for char in input_string:
        if char not in seen:
            seen[char] = True
            result.append(char)
    
    return ''.join(result)

# Example usage
if __name__ == "__main__":
    test_string = "hello world"
    result = remove_duplicate_chars(test_string)
    print(f"Original string: {test_string}")
    print(f"String after removing duplicates: {result}") 