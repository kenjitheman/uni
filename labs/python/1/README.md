**Introduction to the Python programming language**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn how to work with strings, mathematical operators, and lists. Write functions that perform various operations and return values.

## Task Description

**Завдання 1: операції з рядками**

Напишіть функцію task1 з аргументом, аргумент приймає строку (str) на вхід:
Знайти довжину цього відрізка та повернути значення.

**Завдання 2: математичні оператори**

Створіть функцію task2 яка приймає три аргументи(число,строка(+,-,/,//,**,*),число),
Функція має зробити математичну операцію з тих аргументів, приклад: число1 * число2 та повернути значення .

**Завдання 3:**

Створіть функцію task3 яка приймає один аргумент (список(list[int]) знайти в цьому списку максимальне значения числа, та повернути це значення.

## Work Execution

1. Create a new Python file (main.py).
2. Implement the task1 function that takes a string as an argument and returns the length of the string.
3. Implement the task2 function that takes three arguments (number, string (+, -, /, //, **, *), number). The function should perform a mathematical operation with these arguments, for example: number1 * number2 and return the value.
4. Implement the task3 function that takes one argument (list (list[int]) to find the maximum value of a number in this list and return this value.
5. Call the task1, task2, and task3 functions with the necessary arguments.
6. Run the program.

## Project Structure

```rust
Introduction to the Python programming language
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
# takes str as an argument and returns the length of the string
def task1(str):
    return len(str)

# takes three arguments (number, string (+, -, /, //, **, *), number) and returns the result of the operation
def task2(num1, operator, num2):
    result = (
        num1 + num2 if operator == "+" else
        num1 - num2 if operator == "-" else
        num1 * num2 if operator == "*" else
        num1 / num2 if operator == "/" else
        None
    )
    
    if result is None:
        return "maan, looks like you are completely wrong about math"

    return result

# takes a list of integers as an argument and returns the maximum value
def task3(nums):
    max_val = max(nums)
    return max_val
```

## Results

Data I provided to the functions and output they returned:

```python
print(task1("Hello, World!")) # 13
print(task2(5, "+", 3)) # 8
print(task3([1, 2, 3, 4, 5])) # 5
```

## Conclusions

In this lab, I got acquainted with the Python programming language and learned how to work with strings, mathematical operators, and lists. I also learned how to write functions that perform various operations and return values.
