def check_truth(a, b, c):
    return (a and b) or c

def logical_equivalence(x, y):
    return x == y

def xor(a, b):
    return (a and not b) or (not a and b)

def greet(condition):
    return "Hello, World!" if condition else "Goodbye, World!"

def nested_condition(x, y, z):
    if x == y == z:
        return "All same"
    elif x != y != z != x:
        return "All different"
    else:
        return "Neither"

def count_true(lst):
    return sum(1 for x in lst if x)

def parity(num):
    return bin(num).count('1') % 2 == 0

def majority_vote(a, b, c):
    return (a + b + c) > 1

def switch(condition):
    return not condition

def ternary_check(condition, true_result, false_result):
    return true_result if condition else false_result

def validate(x, y, z):
    return x or (y and z)

def chain_check(a, b, c):
    if a < b < c:
        return "Increasing"
    elif a > b > c:
        return "Decreasing"
    else:
        return "Neither"

def filter_true(lst):
    return [x for x in lst if x]

def multiplexer(a, b, c, num):
    if a:
        return num * 2
    elif b:
        return num * 3
    elif c:
        return num - 5
    else:
        return num
