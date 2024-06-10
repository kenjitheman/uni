**Tuples**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn how to deal with tuples.

## Task Description

1. Write a Python function (task1), that accepts a tuple containing two numbers and then return their sum.

2. Write a Python function (task2), that accepts a tuple that contains several numbers and strings, and return its length.

3. Write a Python function (task3), that accepts a tuple from a list of numbers, sort it in descending order, and return the first element.

4. Write a Python function (task4), that accepts a tuple that contains a dictionary, and return the value of the key "name".

5. Write a Python function (task5), that accepts a tuple from a list of tuples, sort it by ascending length of the first element of each tuple, and return the last element of the last tuple.

6. Write a Python function (task6), that accepts a tuple that contains several lists, filter out all odd numbers, and return their product.

7. Write a Python function (task7), that accepts a tuple that contains several tuples with two numbers each, and return the sum of all second elements of each tuple.

## Work Execution

1. Create a new Python file (main.py).
2. Implement the task1, task2, task3, task4, task5, task6, and task7 functions.
3. Call the task1, task2, task3, task4, task5, task6, and task7 functions with the necessary arguments.
4. Run the program.

## Project Structure

```rust
Tuples
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
# takes a tuple containing numbers and returns their sum
def task1(nums):
    return sum(nums)

# takes a tuple containing numbers and strings and returns its length
def task2(data):
    return len(data)

# takes a tuple from a list of numbers, sorts it in descending order, and returns the first element
def task3(nums):
    sorted_nums = sorted(nums, reverse=True)
    return sorted_nums[0]

# takes a tuple containing a dictionary and returns the value of the key "name"
def task4(data):
    _dict = data[0]
    return _dict.get("name", None)

# takes a tuple from a list of tuples, sorts it by ascending length of the first element of each tuple, and returns the last element of the last tuple
def task5(data):
    sorted_tupls = sorted(data, key=lambda x: len(x[0]))
    return sorted_tupls[-1][-1]

# takes a tuple containing several lists, filters out all odd numbers, and returns their product
def task6(data):
    odd_nums = [num for sublist in data for num in sublist if num % 2 != 0]
    product = 1
    for num in odd_nums:
        product *= num
    return product

# takes a tuple containing several tuples with two numbers each, and returns the sum of all second elements of each tuple
def task7(data):
    return sum(second for _, second in data)
```

## Results

Data I provided to the functions and output they returned:

```python
print(task1((1, 2))) # 3
print(task2((1, 2, "hello", 4))) # 4
print(task3((1, 2, 3))) # 3
print(task4(({"name": "John"},))) # John
print(task5((("hello", 1), ("world", 2), ("python", 3)))) # python
print(task6(([1, 2, 3], [4, 5, 6], [7, 8, 9]))) # 945
print(task7(((1, 2), (3, 4), (5, 6)))) # 12
```

## Conclusions

I have learned how to work with tuples in Python.
