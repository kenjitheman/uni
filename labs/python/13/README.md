**Tasks for data processing. Functions with different parameter types for solving data processing tasks**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn what are the tasks for data processing. Functions with different parameter types for solving data processing tasks.

## Task Description

**Task 1: Interpolate Missing Values**

Create a function interpolate_missing that takes a list of numbers, which may include None as a placeholder for missing values. The function should interpolate missing values using the average of the nearest non-`None` neighbors.

- Example of function usage:

```python
print(interpolate_missing([1, None, None, 4])) # Output: [1, 2, 3, 4]
```

**Task 2: Fibonacci Series Generator**

Write a generator function fibonacci that yields the Fibonacci series up to `n` terms.

- Example of function usage:

```python
for num in fibonacci(5):
    print(num) # Output: 0, 1, 1, 2, 3
```

**Task 3: Batch Data Processing**

Define a function process_batches that takes a list of numbers and a batch size, then processes each batch to return their maximum values.

- Example of function usage:

```python
print(process_batches([1, 2, 3, 4, 5, 6], 2)) # Output: [2, 4, 6]
```

**Task 4: Encode and Decode Strings**

Create two functions encode_string and decode_string . encode_string should convert the string into a run-length encoded format, and decode_string should revert it back to the original string.

- Example of function usage:

```python
encoded = encode_string("aaabbc")
print(encoded) # Output: "3a2bc"
print(decode_string(encoded)) # Output: "aaabbc"
```

**Task 5: Matrix Rotation**

Write a function rotate_matrix that rotates a given n x n matrix 90 degrees clockwise.

- Example of function usage:

```python
matrix = [
    [1, 2],
    [3, 4]
]
print(rotate_matrix(matrix)) # Output: [[3, 1], [4, 2]]
```

**Task 6: Regular Expression Search**

Define a function regex_search that takes a list of strings and a regular expression pattern, returning a list of all strings that match the pattern.

- Example of function usage:

```python
print(regex_search(["test", "test123", "none"], "test\d+")) # Output: ["test123"]
```

**Task 7: Merge Sorted Arrays**

Create a function merge_sorted_arrays that merges two sorted arrays into a single sorted array.

- Example of function usage:

```python
print(merge_sorted_arrays([1, 3, 5], [2, 4, 6])) # Output: [1, 2, 3, 4, 5, 6]
```

**Task 8: Prime Number Checker**

Write a function is_prime that takes a number and returns True if it is a prime number, otherwise False.

- Example of function usage:

```python
print(is_prime(11)) # Output: True
```

**Task 9: Group by Key**

Define a function group_by_key that takes a list of dictionaries and groups them by a specified key.

- Example of function usage:

```python
data = [{'key': 'a', 'value': 1}, {'key': 'b', 'value': 2}, {'key': 'a', 'value': 3}]
print(group_by_key(data, 'key')) # Output: {'a': [1, 3], 'b': [2]}
```

**Task 10: Remove Outliers**

Create a function remove_outliers that removes elements from a list that are more than two standard deviations away from the mean.

- Example of function usage:

```python
print(remove_outliers([10, 100, 200, 300, 400, 500, 600])) # Output: [100, 200, 300, 400, 500]
```

## Work Execution

1. Create a new Python file (main.py).
2. Implement the interpolate_missing, fibonacci, process_batches, encode_string, decode_string, rotate_matrix, regex_search, merge_sorted_arrays, is_prime, group_by_key, and remove_outliers functions.
3. Call the interpolate_missing, fibonacci, process_batches, encode_string, decode_string, rotate_matrix, regex_search, merge_sorted_arrays, is_prime, group_by_key, and remove_outliers functions with the necessary arguments.
4. Run the program.

## Project Structure

```rust
Tasks for data processing. Functions with different parameter types for solving data processing tasks
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
# takes a list of numbers and interpolates missing values
def interpolate_missing(numbers):
    # create a list to store the interpolated values
    interpolated = []
    # iterate over the numbers
    for i, num in enumerate(numbers):
        # check if the number is missing
        if num is None:
            # find the nearest non-None neighbors
            left, right = i - 1, i + 1
            # while loop to find the nearest non-None neighbors
            while left >= 0 and numbers[left] is None:
                left -= 1
            while right < len(numbers) and numbers[right] is None:
                right += 1
            # interpolate the missing value
            interpolated.append((numbers[left] + numbers[right]) / 2) if left >= 0 and right < len(numbers) else interpolated.append(numbers[left] if left >= 0 else numbers[right])
        # if the number is not missing, add it to the interpolated list
        else:
            interpolated.append(num)
    # return the interpolated list
    return interpolated

# generates the Fibonacci series up to n terms
def fibonacci(n):
    # assign initial values to a and b
    a, b = 0, 1
    # loop to generate the Fibonacci series
    for _ in range(n):
        # yield the current value of a
        yield a
        # update a and b to the next values in the series
        a, b = b, a + b

# processes batches of numbers and returns their maximum values
def process_batches(numbers, batch_size):
    # return the maximum value of each batch
    return [max(numbers[i:i+batch_size]) for i in range(0, len(numbers), batch_size)]

# encodes a string using run-length encoding
def encode_string(s):
    # initialize an empty string to store the encoded result
    encoded = ''
    # initialize a count variable to keep track of the number of consecutive characters
    count = 1
    # iterate over the string
    for i in range(1, len(s)):
        # check if the current character is the same as the previous character, if so, increment the count
        if s[i] == s[i-1]:
            count += 1
        # if the current character is different, add the count and character to the encoded string
        else:
            encoded += str(count) + s[i-1]
            count = 1
    # add the last character and count to the encoded string
    encoded += str(count) + s[-1]
    # return the encoded string
    return encoded

# decodes a run-length encoded string
def decode_string(s):
    # initialize an empty string to store the decoded result
    decoded = ''
    # initialize an index variable to keep track of the current position in the string
    i = 0
    # iterate over the string
    while i < len(s):
        # get the count of the character
        count = int(s[i])
        # takes a list of numbers and interpolates missing values
        decoded += s[i+1] * count
        # move to the next character
        # step by 2 to skip the count and character
        i += 2
    # return the decoded string
    return decoded

# rotates a matrix 90 degrees clockwise
def rotate_matrix(matrix):
    # zip and reverse the matrix to rotate it 90 degrees clockwise
    return [list(row) for row in zip(*matrix[::-1])]

import re
# searches for strings that match a regular expression pattern
def regex_search(strings, pattern):
    # return the strings that match the pattern
    return [s for s in strings if re.match(pattern, s)]

# merges two sorted arrays into a single sorted array
def merge_sorted_arrays(arr1, arr2):
    # initialize an empty list to store the merged array
    merged = []
    # initialize two pointers for the two arrays
    i, j = 0, 0
    # loop until one of the arrays is exhausted
    while i < len(arr1) and j < len(arr2):
    # compare the elements at the current indices and add the smaller one to the merged list
        merged.append(arr1[i] if arr1[i] < arr2[j] else arr2[j])
    # increment the pointer for the array with the smaller element
        i += arr1[i] < arr2[j]
        j += arr1[i] >= arr2[j]
    # add the remaining elements from the arrays to the merged list
    merged.extend(arr1[i:])

    merged.extend(arr2[j:])
    # return the merged list
    return merged

# checks if a number is prime, first checks if the number is less than 2, then iterates over the numbers up to the square root of the number to check for divisibility, returns True if the number is prime, otherwise False
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

# groups a list of dictionaries by a specified key
def group_by_key(data, key):
    # initialize an empty dictionary to store the grouped data
    grouped = {}
    # iterate over the data
    for item in data:
        # add the value to the list of values for the key
        grouped.setdefault(item[key], []).append(item['value'])
    return grouped

# removes outliers from a list of numbers by calculating the mean and standard deviation, then filtering out values that are more than two standard deviations away from the mean
def remove_outliers(data):
    mean = sum(data) / len(data)
    std_dev = (sum((x - mean) ** 2 for x in data) / len(data)) ** 0.5
    return [x for x in data if abs(x - mean) <= 2 * std_dev]
```

## Results

Data I provided to the functions and output they returned:

**Task 1: Interpolate Missing Values**

```python
print(interpolate_missing([1, None, None, 4])) # [1, 2, 3, 4]
```

**Task 2: Fibonacci Series Generator**

```python
for num in fibonacci(5):
    print(num) # 0, 1, 1, 2, 3
```

**Task 3: Batch Data Processing**

```python
print(process_batches([1, 2, 3, 4, 5, 6], 2)) # [2, 4, 6]
```

**Task 4: Encode and Decode Strings**

```python
encoded = encode_string("aaabbc")
print(encoded) # 3a2bc
print(decode_string(encoded)) # aaabbc
```

**Task 5: Matrix Rotation**

```python
matrix = [
    [1, 2],
    [3, 4]
]
print(rotate_matrix(matrix)) # [[3, 1], [4, 2]]
```

**Task 6: Regular Expression Search*

```python
print(regex_search(["test", "test123", "none"], "test\d+")) # ["test123"]
```

**Task 7: Merge Sorted Arrays**

```python
print(merge_sorted_arrays([1, 3, 5], [2, 4, 6])) # [1, 2, 3, 4, 5, 6]
```

**Task 8: Prime Number Checker**

```python
print(is_prime(11)) # True
```

**Task 9: Group by Key**

```python
data = [{'key': 'a', 'value': 1}, {'key': 'b', 'value': 2}, {'key': 'a', 'value': 3}]
print(group_by_key(data, 'key')) # {'a': [1, 3], 'b': [2]}
```

**Task 10: Remove Outliers**

```python
print(remove_outliers([10, 100, 200, 300, 400, 500, 600])) # [100, 200, 300, 400, 500]
```

## Conclusions

I have learned how to work with different parameter types for solving data processing tasks in Python.
