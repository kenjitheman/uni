**Functions**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn functions and how to work with them (more deeply).

## Task Description

1. Write a function (task1) to find the maximum of three numbers.

2. Write a function (task2) to sum all the numbers in a list.
- Sample List: `(8, 2, 3, 0, 7)`
- Expected return: `20`

3. Write a function (task3) to multiply all the numbers in a list.
- Sample List: `(8, 2, 3, -1, 7)`
- Expected return: `-336`

4. Write a function (task4) to reverse a string.
- Sample String: `"1234abcd"`
- Expected return: `"dcba4321"`

5. Write a function (task5) to calculate the factorial of a number (a non-negative integer).
- Sample Integer: `3`
- Expected return: `6`

6. Write a function (task6) to check whether a number falls within a given range (25-50). 
- Sample Integer: `512`
- Expected return: `False`

7. Write a function (task7) that accepts a string and counts the number of upper and lower case letters.
- Sample String: `'The quick Brow Fox'`
- Expected return: `3, 12`

8. Write a Python function (task8) that takes a list and returns a new list with distinct elements from the first list.
- Sample List: `[1,2,3,3,3,3,4,5]`
- Expected return: `[1, 2, 3, 4, 5]`

9. Write a Python program (task9) to return the even numbers from a given list. 
- Sample List: `[1, 2, 3, 4, 5, 6, 7, 8, 9]`
- Expected return: `[2, 4, 6, 8]`

10. Write a Python function (task10) that returns the max number of last row of Pascal's triangle.
> **Note:** Pascal's triangle is an arithmetic and geometric figure first imagined by Blaise Pascal.

## Work Execution

1. Create a new Python file (main.py).
2. Implement the task1, task2, task3, task4, task5, task6, task7, task8, task9, and task10 functions.
3. Call the task1, task2, task3, task4, task5, task6, task7, task8, task9, and task10 functions with the necessary arguments.
4. Run the program.

## Project Structure

```rust
Functions
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
# takes three arguments and returns the maximum of them
def task1(a, b, c):
    return max(a, b, c)

# takes a list of numbers and returns the sum of them
def task2(numbers):
    return sum(numbers)

# takes a list of numbers and returns the product of them
def task3(numbers):
    result = 1
    for num in numbers:
        result *= num
    return result

# takes a string and returns the reversed string
def task4(s):
    return s[::-1]

# takes a number and returns the factorial of it
def task5(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * task5(n-1)

# takes a number and returns whether it falls within the range 25-50
def task6(num):
    return 25 <= num <= 50

# takes a string and returns the count of upper and lower case letters
def task7(s):
    upper_count = sum(1 for char in s if char.isupper())
    lower_count = sum(1 for char in s if char.islower())
    return upper_count, lower_count

# takes a list and returns a new list with distinct elements
def task8(input_list):
    return list(set(input_list))

# takes a list and returns a new list with even numbers
def task9(input_list):
    return [num for num in input_list if num % 2 == 0]

# returns the max number of last row of Pascal's triangle
def task10(row_num):
    def generate_pascals_triangle(rows):
        triangle = [[1]]
        for _ in range(1, rows):
            previous_row = triangle[-1]
            new_row = [1] + [previous_row[i-1] + previous_row[i] for i in range(1, len(previous_row))] + [1]
            triangle.append(new_row)
        return triangle

    triangle = generate_pascals_triangle(row_num + 1)
    return max(triangle[-1])
```

## Results

Data I provided to the functions and output they returned:

```python
print(task1(1, 2, 3)) # 3
print(task2([8, 2, 3, 0, 7])) # 20
print(task3([8, 2, 3, -1, 7])) # -336
print(task4("1234abcd")) # "dcba4321"
print(task5(3)) # 6
print(task6(512)) # False
print(task7('The quick Brow Fox')) # (3, 12)
print(task8([1, 2, 3, 3, 3, 3, 4, 5])) # [1, 2, 3, 4, 5]
print(task9([1, 2, 3, 4, 5, 6, 7, 8, 9])) # [2, 4, 6, 8]
print(task10(5)) # 16
```

## Conclusions

In this project, I learned how to work with functions in Python. I implemented functions to find the maximum of three numbers, sum all the numbers in a list, multiply all the numbers in a list, reverse a string, calculate the factorial of a number, check whether a number falls within a given range, count the number of upper and lower case letters in a string, return a new list with distinct elements, return a new list with even numbers, and return the max number of the last row of Pascal's triangle. I also learned how to call these functions with the necessary arguments and print the output.
