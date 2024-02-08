def task1(str):
    return len(str)

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

def task3(nums):
    max_val = max(nums)
    return max_val
