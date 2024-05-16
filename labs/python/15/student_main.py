def clean_data(data):
    return list(map(lambda x: x.strip().lower(), data.split(',')))

def filter_emails(emails):
    return list(filter(lambda x: x.count('@') == 1, emails.split()))

def extract_keywords(words, length):
    return list(filter(lambda x: len(x) > length, words.split()))

def process_text(text):
    processed_text = map(lambda x: ''.join(filter(lambda c: c.isalnum() or c == ' ', x)).strip().lower(), text.split(','))
    return list(filter(lambda x: len(x) > 0 and len(x) > 2, processed_text))

def normalize_data(data):
    numbers = list(map(float, data.split(',')))
    max_val = max(numbers)
    return [round(num / max_val, 3) for num in numbers]

def concatenate_strings(data, separator):
    return ''.join(data.split(separator))

def sum_numeric_strings(text):
    numbers = [int(num) for num in text.split(',') if num.strip().isdigit()]
    return sum(numbers)

def filter_numbers(numbers, threshold):
    filtered_nums = []
    for num in numbers.split(','):
        num = num.strip()
        try:
            if float(num) <= threshold:
                filtered_nums.append(float(num))
        except ValueError:
            continue
    return filtered_nums

def map_to_squares(numbers):
    return list(map(lambda x: int(x)**2, numbers.split(',')))

def reverse_strings(words):
    return [word[::-1] for word in words.split(',')]
