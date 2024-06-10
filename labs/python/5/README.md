**Arrays, dictionaries**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn how to deal with arrays and dictionaries.

## Task Description

1. Create a def(task1) which merge two Python dictionaries.
- Sample input: list of dictionaries

2. Write a def(task2) that reads a string and interprets it as an array of machine values. 
- Sample Output: 
    - array1: `array('i', [7, 8, 9, 10])`
    - Bytes: `b'0700000008000000090000000a000000'`
    - array2: `array('i', [7, 8, 9, 10])`

3. Write a def(task3) that removes all duplicate elements from an array and returns a new array. 
- Sample Output:
    - Original array: `1 3 5 1 3 7 9`
    - After removing duplicate elements from the said array: `1 3 5 7 9`
- Original array: `2 4 2 6 4 8`
    - After removing duplicate elements from the said array: `2 4 6 8`

4. Write a def(task4) to find the missing number in a given array of numbers between 10 and 20.
- Sample Output:
    - Original array: `10 11 12 13 14 16 17 18 19 20`
    - Missing number in the said array (10-20): `15`
- Original array: `10 11 12 13 14 15 16 17 18 19`
    - Missing number in the said array (10-20): `20`

5. Write a def(task5) to returns all distinct values in a dictionary. Output count of unique values.
- Sample Data: `[{"V":"S001"}, {"V": "S002"}, {"VI": "S001"}, {"VI": "S005"}, {"VII":"S005"}, {"V":"S009"},{"VIII":"S007"}]`
- Expected Output: `['S005', 'S002', 'S007', 'S001', 'S009']`

6. Write a def(task6) function that returns the number of all possible combinations of letters from the dictionaries it receives.
- Sample data: `[{'a':5,'b':7} , {'v':1,'n':6}]`
- Expected Output: `4`

7. Write a def(task7) function that returns the list of the largest 3 values of the corresponding keys in the dictionary. The keys will be int only.
- Sample data: `{3:2 , 4:7, 0:2 , 12:0}`
- Expected Output: `[3,4,12]`

8. Write a def(task8) to combine values in a list of dictionaries.
- Sample data: `[{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount': 300}, {'item': 'item1', 'amount': 750}]`
- Expected Output: `{'item1': 1150, 'item2': 300}`

## Work Execution

1. Create a new Python file (main.py).
2. Implement the task1, task2, task3, task4, task5, task6, task7, and task8 functions.
3. Call the task1, task2, task3, task4, task5, task6, task7, and task8 functions with the necessary arguments.
4. Run the program.

## Project Structure

```rust
Arrays, dictionaries
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
# merges a list of dictionaries into a single dictionary
# if there are duplicate keys, the value from the last dictionary is used
def task1(dict_list):
    merged_dict = {}
    for d in dict_list:
        for key, value in d.items():
            merged_dict[key] = value
    return merged_dict

# reads a string of hexadecimal numbers and interprets it as an array of integers
# each integer is formed by converting 8-character segments of the string from hex to decimal
def task2(s):
    arr = []
    for i in range(0, len(s), 8):
        arr.append(int(s[i:i+8], 16))
    return arr

# removes all duplicate elements from an array and returns a new array with unique values, preserving order
def task3(arr):
    unique_values = []
    for item in arr:
        if item not in unique_values:
            unique_values.append(item)
    return unique_values

# finds and returns the missing number in an array of integers that should contain all numbers from 10 to 20
def task4(arr):
    full_range = set(range(10, 21))
    for num in full_range:
        if num not in arr:
            return num

# returns a list of all distinct values from a list of dictionaries
def task5(data):
    values = []
    for d in data:
        for val in d.values():
            if val not in values:
                values.append(val)
    return values

# counts the total number of distinct keys in a list of dictionaries and returns this count
def task6(dicts):
    keys = set()
    for d in dicts:
        keys.update(d.keys())
    return len(keys)

# returns the top three keys with the highest values from a dictionary, sorted in descending order
def task7(data):
    sorted_keys = sorted(data.keys(), reverse=True)
    return sorted_keys[:3]

# combines a list of dictionaries into a single dictionary, summing the 'amount' values for each 'item'
# each dictionary in the list must have 'item' and 'amount' keys
def task8(dict_list):
    combined_dict = {}
    for d in dict_list:
        item = d['item']
        amount = d['amount']
        combined_dict[item] = combined_dict.get(item, 0) + amount
    return combined_dict
```

## Results

Data I provided to the functions and output they returned:

```python
print(task1([{'a': 1, 'b': 2}, {'b': 3, 'c': 4}])) # {'a': 1, 'b': 3, 'c': 4}
print(task2('0700000008000000090000000a000000')) # [7, 8, 9, 10]
print(task3([1, 3, 5, 1, 3, 7, 9])) # [1, 3, 5, 7, 9]
print(task4([10, 11, 12, 13, 14, 16, 17, 18, 19, 20])) # 15
print(task5([{'V': 'S001'}, {'V': 'S002'}, {'VI': 'S001'}, {'VI': 'S005'}, {'VII': 'S005'}, {'V': 'S009'}, {'VIII': 'S007'}])) # ['S001', 'S002', 'S005', 'S009', 'S007']
print(task6([{'a': 5, 'b': 7}, {'v': 1, 'n': 6}])) # 4
print(task7({3: 2, 4: 7, 0: 2, 12: 0})) # [12, 4, 3]
print(task8([{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount': 300}, {'item': 'item1', 'amount': 750}])) # {'item1': 1150, 'item2': 300}
```

## Conclusions

In this project, I learned how to work with arrays and dictionaries in Python. I implemented functions to merge dictionaries, interpret hexadecimal strings as arrays of integers, remove duplicates from arrays, find missing numbers, extract distinct values from dictionaries, count unique keys, find top keys by value, and combine dictionaries. I successfully tested these functions with sample data and obtained the expected results
