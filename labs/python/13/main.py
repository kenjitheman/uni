def interpolate_missing(numbers):
    interpolated = []
    for i, num in enumerate(numbers):
        if num is None:
            left, right = i - 1, i + 1
            while left >= 0 and numbers[left] is None:
                left -= 1
            while right < len(numbers) and numbers[right] is None:
                right += 1
            interpolated.append((numbers[left] + numbers[right]) / 2) if left >= 0 and right < len(numbers) else interpolated.append(numbers[left] if left >= 0 else numbers[right])
        else:
            interpolated.append(num)
    return interpolated

def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        yield a
        a, b = b, a + b

def process_batches(numbers, batch_size):
    return [max(numbers[i:i+batch_size]) for i in range(0, len(numbers), batch_size)]

def encode_string(s):
    encoded = ''
    count = 1
    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            count += 1
        else:
            encoded += str(count) + s[i-1]
            count = 1
    encoded += str(count) + s[-1]
    return encoded

def decode_string(s):
    decoded = ''
    i = 0
    while i < len(s):
        count = int(s[i])
        decoded += s[i+1] * count
        i += 2
    return decoded

def rotate_matrix(matrix):
    return [list(row) for row in zip(*matrix[::-1])]

import re
def regex_search(strings, pattern):
    return [s for s in strings if re.match(pattern, s)]

def merge_sorted_arrays(arr1, arr2):
    merged = []
    i, j = 0, 0
    while i < len(arr1) and j < len(arr2):
        merged.append(arr1[i] if arr1[i] < arr2[j] else arr2[j])
        i += arr1[i] < arr2[j]
        j += arr1[i] >= arr2[j]
    merged.extend(arr1[i:])
    merged.extend(arr2[j:])
    return merged

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def group_by_key(data, key):
    grouped = {}
    for item in data:
        grouped.setdefault(item[key], []).append(item['value'])
    return grouped

def remove_outliers(data):
    mean = sum(data) / len(data)
    std_dev = (sum((x - mean) ** 2 for x in data) / len(data)) ** 0.5
    return [x for x in data if abs(x - mean) <= 2 * std_dev]
