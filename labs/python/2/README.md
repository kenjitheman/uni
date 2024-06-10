**Operators**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn how to work with strings, mathematical operators, and lists. Write functions that perform various operations and return values.

## Task Description

0. Функція task0 приймає два аргументи, number1 і number2, скільки це буде в суммі та повернути результат:

```python
def task0(number1, number 2):
    result = number1 + number2
    return result
```

1. Функція task1 приймає три аргументи (number1,znak(str),number2) number1 та number2 між собою використовуючи znak, повернути булове значення, знаки порівняння:(>, <, >=, <=, ==, !=)

```python
def task1(number1,znak,number2):
    return some_result
```

2. Функція task2 приймає два аргументи(text(str),number(int)). Перевірити чи довжина text більше number. Поверніть найбільше значення 

```python
def task2(text,number):
    return some_result
```

3. Функція task3 приймає три аргументи(number1,number2,number3). Перевірити чи всі числа рівні між собою, поверніть булове значення

```python
def task3(number1,number2,number3):
    return some_result
```

## Work Execution

1. Create a new Python file (main.py).
2. Implement the task0 function that takes two arguments, number1 and number2.
3. Implement the task1 function that takes three arguments (number1, sign (str), number2) number1 and number2 using sign, return a boolean value, comparison signs: (> , < , >= , <= , == , !=)
4. Implement the task2 function that takes two arguments (text (str), number (int)). Check if the length of text is greater than number. Return the largest value.
5. Implement the task3 function that takes three arguments (number1, number2, number3). Check if all numbers are equal to each other, return a boolean value.
6. Call the task0, task1, task2, and task3 functions with the necessary arguments.
7. Run the program.

## Project Structure

```rust
Operators
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
# takes two arguments, number1 and number2, how much it will be in the sum and return the result
def task1(number1, znak, number2):
    if znak == '>':
        return number1 > number2
    elif znak == '<':
        return number1 < number2
    elif znak == '>=':
        return number1 >= number2
    elif znak == '<=':
        return number1 <= number2
    elif znak == '==':
        return number1 == number2
    elif znak == '!=':
        return number1 != number2
    else:
        return False

# takes two arguments (text (str), number (int)). Check if the length of text is greater than number. Return the largest value
def task2(text, number):
    return len(text) > number

# takes three arguments (number1, number2, number3). Check if all numbers are equal to each other, return a boolean value
def task3(number1, number2, number3):
    return number1 == number2 == number3
```

## Results

Data I provided to the functions and output they returned:

```python
print(task1(1, '>', 2)) # False
print(task2('hello', 3)) # True
print(task3(1, 1, 1)) # True
```

## Conclusions

I have learned how to work with strings and mathematical operators. I have written functions that perform various operations and return values. I have learned how to compare numbers and strings, and how to check if the length of a string is greater than a number. I have learned how to check if all numbers are equal to each other. I have learned how to return boolean values from functions.
