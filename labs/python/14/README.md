**Boolean Expressions and Conditional Statements**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn how to work with boolean expressions and conditional statements.

## Task Description

**Task 1: Basic Boolean Operations**

Write a function check_truth that takes three boolean parameters `( a, b, c )` and returns the result of the expression `(a and b)` or `c` .

- Example of function usage:

```python
print(check_truth(True, False, True)) # True
```

**Task 2: Logical Equivalence**

Write a function `logical_equivalence` that takes two boolean parameters and returns `True` if they are logically equivalent, otherwise `False`.

- Example of function usage:

```python
print(logical_equivalence(True, True)) # True
print(logical_equivalence(True, False)) # False
```

**Task 3: Exclusive Or (XOR)**

Write a function xor that takes two boolean arguments and returns `True` if exactly one of the arguments is `True`.

- Example of function usage:

```python
print(xor(True, False)) # True
print(xor(True, True)) # False
```

**Task 4: Conditional Greeting**

Write a function greet that takes a boolean value. If True , the function should return "Hello, World!", otherwise it should return "Goodbye, World!".

- Example of function usage:

```python
print(greet(True)) # Hello, World!
print(greet(False)) # Goodbye, World!
```

**Task 5: Nested Condition**

Write a function nested_condition that takes three boolean parameters `( x, y, z )`. The function should return "All same" if all three parameters are equal, "All different" if all three parameters are different, and "Neither" otherwise.

- Example of function usage:

```python
print(nested_condition(3, 3, 3)) # All same
print(nested_condition(3, 4, 5)) # All different
print(nested_condition(3, 3, 4)) # Neither
```

**Task 6: Conditional Counting**

Write a function count_true that accepts a list of boolean values and returns the count of how many are `True`.

- Example of function usage:

```python
print(count_true([True, False, True, False, True])) # 3
```

**Task 7: Boolean Parity**

Write a function parity that accepts an integer and returns True if the number of 1 s in the binary representation of the number is even, otherwise False.

- Example of function usage:

```python
print(parity(3)) # False (binary 11)
```

**Task 8: Majority Vote**

Write a function `majority_vote` that takes three boolean inputs and returns `True` if more than half of them are `True`, otherwise `False`.

- Example of function usage:

```python
print(majority_vote(True, True, False)) # True
```

**Task 9: Boolean Switch**

Write a function switch that takes a boolean value and returns its opposite.

- Example of function usage:

```python
print(switch(True)) # False
```

**Task 10: Ternary Operator Simulation**

Write a function ternary_check that simulates a ternary operator. It takes three parameters: a boolean condition, a result if `True`, and a result if `False`. It returns the corresponding result based on the condition.

- Example of function usage:

```python
print(ternary_check(True, "Yes", "No")) # Yes
```

**Task 11: Validate Combination**

Write a function validate that takes three booleans `( x, y, z)` and returns `True` if `x` is `True` or both `y` and `z` are `True`, otherwise `False`.

- Example of function usage:

```python
print(validate(True, False, True)) # True
```

**Task 12: Condition Chain**

Write a function chain_check that evaluates a sequence of conditions. It takes three integers and returns "Increasing" if they are in strictly increasing order,
"Decreasing" if in strictly decreasing order, or "Neither" otherwise.

- Example of function usage:

```python
print(chain_check(1, 2, 3)) # Increasing
print(chain_check(3, 2, 1)) # Decreasing
```

**Task 13: Boolean Filter**

Write a function filter_true that takes a list of boolean values and returns a new list containing only the True values.

- Example of function usage:

```python
print(filter_true([True, False, True, False])) # [True, True]
```

**Task 14: Conditional Multiplexer**

Write a function multiplexer that takes four parameters: three boolean inputs and one integer. If the first boolean is True , return double the integer. If the second is True , return triple the integer. If the third is True , return the integer minus five. If none are True , return the integer unchanged.

- Example of function usage:

```python
print(multiplexer(False, False, True, 10)) # 5
```

## Work Execution

1. Create a new Python file (main.py).
2. Implement the check_truth, logical_equivalence, xor, greet, nested_condition, count_true, parity, majority_vote, switch, ternary_check, validate, chain_check, filter_true, and multiplexer functions.
3. Call the functions with the necessary arguments.
4. Run the program.

## Project Structure

```rust
Boolean Expressions and Conditional Statements
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
# takes three boolean parameters and returns the result of the expression (a and b) or c
def check_truth(a, b, c):
    return (a and b) or c

# takes two boolean parameters and returns True if they are logically equivalent, otherwise False
def logical_equivalence(x, y):
    return x == y

# takes two boolean arguments and returns True if exactly one of the arguments is True
def xor(a, b):
    return (a and not b) or (not a and b)

# takes a boolean value and returns "Hello, World!" if True, otherwise "Goodbye, World!"
def greet(condition):
    return "Hello, World!" if condition else "Goodbye, World!"

# takes three boolean parameters and returns "All same" if all three parameters are equal, "All different" if all three parameters are different, and "Neither" otherwise
def nested_condition(x, y, z):
    if x == y == z:
        return "All same"
    elif x != y != z != x:
        return "All different"
    else:
        return "Neither"

# takes a list of boolean values and returns the count of how many are True
def count_true(lst):
    return sum(1 for x in lst if x)

# accepts an integer and returns True if the number of 1s in the binary representation of the number is even, otherwise False
def parity(num):
    return bin(num).count('1') % 2 == 0

# takes three boolean inputs and returns True if more than half of them are True, otherwise False
def majority_vote(a, b, c):
    return (a + b + c) > 1

# takes a boolean value and returns its opposite
def switch(condition):
    return not condition

# simulates a ternary operator. It takes three parameters: a boolean condition, a result if True, and a result if False. It returns the corresponding result based on the condition
def ternary_check(condition, true_result, false_result):
    return true_result if condition else false_result

# takes three booleans and returns True if x is True or both y and z are True, otherwise False
def validate(x, y, z):
    return x or (y and z)

# evaluates a sequence of conditions. It takes three integers and returns "Increasing" if they are in strictly increasing order, "Decreasing" if in strictly decreasing order, or "Neither" otherwise
def chain_check(a, b, c):
    if a < b < c:
        return "Increasing"
    elif a > b > c:
        return "Decreasing"
    else:
        return "Neither"

# takes a list of boolean values and returns a new list containing only the True values
def filter_true(lst):
    return [x for x in lst if x]

# takes four parameters: three boolean inputs and one integer. If the first boolean is True, return double the integer. If the second is True, return triple the integer. If the third is True, return the integer minus five. If none are True, return the integer unchanged
def multiplexer(a, b, c, num):
    if a:
        return num * 2
    elif b:
        return num * 3
    elif c:
        return num - 5
    else:
        return num
```

## Results

Data I provided to the functions and output they returned:

```python
print(check_truth(True, False, True)) # True
print(logical_equivalence(True, True)) # True
print(xor(True, False)) # True
print(greet(True)) # Hello, World!
print(nested_condition(3, 3, 3)) # All same
print(count_true([True, False, True, False, True])) # 3
print(parity(3)) # False
print(majority_vote(True, True, False)) # True
print(switch(True)) # False
print(ternary_check(True, "Yes", "No")) # Yes
print(validate(True, False, True)) # True
print(chain_check(1, 2, 3)) # Increasing
print(filter_true([True, False, True, False])) # [True, True]
print(multiplexer(False, False, True, 10)) # 5
```

## Conclusions

I have learned how to work with boolean expressions and conditional statements in Python.
