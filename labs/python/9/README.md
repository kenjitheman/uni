**Regex**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn how to work with regular expressions in Python.

## Task Description

1. Write a def(task1) regular expression that matches a string containing only lowercase letters and digits. Input: "hello123" Output: True

2. Write a def(task2) regular expression that matches a string containing at least one uppercase letter. Input: "Hello" Output: True

3. Write a def(task3) regular expression that matches a string containing a valid IPv4 address. Input: "192.168.1.1" Output: True

4. Write a def(task4) regular expression that matches a string containing a valid time in the format of "HH:MM:SS". Input: "12:34:56" Output: True

5. Write a def(task5) regular expression that matches a string containing a valid US postal code in the format of "NNNNN" or "NNNNN-NNNN". 
- Input: `"12345"` or `"12345-6789"`
- Output: `True`

6. Write a def(task6) regular expression that matches a string containing a valid username, with the following criteria: only contains lowercase letters, numbers, underscores, and hyphens, and is between 6 and 12 characters long. 
- Input: `"john_doe-123"` 
- Output: `True`

7. Write a def(task7) regular expression that matches a string containing a valid credit card number (either 15 or 16 digits, starting with either 4, 5, or 6). 
- Input: `"4512-3456-7890-1234"`
- Output: `True`

8. Write a def(task8) regular expression that matches a string containing a valid social security number (in the format of ###-##-####).
- Input: `"123-45-6789"`
- Output: `True`

9. Write a def(task9) regular expression that matches a string containing a valid password, with the following criteria: at least one uppercase letter, one lowercase letter, one digit, one special character (@, #, $, or %), and at least 8 characters long. 
- Input: `"Passw0rd#"`
- Output: `True`

10. Write a def(task10) regular expression that matches a string containing a valid IPv6 address.
- Input: `"2001:0db8:85a3:0000:0000:8a2e:0370:7334"` 
- Output: `True`

## Work Execution

1. Create a new Python file (main.py).
2. Implement the task1, task2, task3, task4, task5, task6, task7, task8, task9, and task10 functions.
3. Call the task1, task2, task3, task4, task5, task6, task7, task8, task9, and task10 functions with the necessary arguments.
4. Run the program.

## Project Structure

```rust
Regex
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
# matches a string containing only lowercase letters and digits
def task1(s):
    import re
    return bool(re.match(r'^[a-z0-9]+$', s))

# matches a string containing at least one uppercase letter
def task2(s):
    import re
    return bool(re.search(r'[A-Z]', s))

# matches a string containing a valid IPv4 address
def task3(s):
    import re
    return bool(re.match(r'^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$', s))

# matches a string containing a valid time in the format of "HH:MM:SS"
def task4(s):
    import re
    return bool(re.match(r'^([01]?[0-9]|2[0-3]):([0-5]?[0-9]):([0-5]?[0-9])$', s))

# matches a string containing a valid US postal code in the format of "NNNNN" or "NNNNN-NNNN"
def task5(s):
    import re
    return bool(re.match(r'^\d{5}(-\d{4})?$', s))

# matches a string containing a valid username
def task6(s):
    import re
    return bool(re.match(r'^[a-z0-9_-]{6,12}$', s))

# matches a string containing a valid credit card number
def task7(s):
    import re
    return bool(re.match(r'^[4-6]\d{3}-?\d{4}-?\d{4}-?\d{4}$', s))

# matches a string containing a valid social security number
def task8(s):
    import re
    return bool(re.match(r'^\d{3}-\d{2}-\d{4}$', s))

# matches a string containing a valid password
def task9(s):
    import re
    return bool(re.match(r'^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@#$%])[A-Za-z\d@#$%]{8,}$', s))

# matches a string containing a valid IPv6 address
def task10(s):
    import re
    return bool(re.match(r'^([0-9a-fA-F]{1,4}:){7}[0-9a-fA-F]{1,4}$', s))
```

## Results

Data I provided to the functions and output they returned:

```python
print(task1("hello123")) # True
print(task2("Hello")) # True
print(task3("192.168.1.1")) # True
print(task4("12:34:56")) # True
print(task5("12345")) # True
print(task6("john_doe-123")) # True
print(task7("4512-3456-7890-1234")) # True
print(task8("123-45-6789")) # True
print(task9("Passw0rd#")) # True
print(task10("2001:0db8:85a3:0000:0000:8a2e:0370:7334")) # True
```

## Conclusions

I have learned how to work with regular expressions in Python. I have implemented functions that match strings containing only lowercase letters and digits, at least one uppercase letter, a valid IPv4 address, a valid time, a valid US postal code, a valid username, a valid credit card number, a valid social security number, a valid password, and a valid IPv6 address.
