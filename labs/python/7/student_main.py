def task1(age):
    try:
        return int(age)
    except ValueError:
        return "Error: Please enter a valid numeric value for age."

def task2(num1, num2):
    try:
        return float(num1) * float(num2)
    except ValueError:
        return "Error: Please enter valid numeric values for numbers."

def task3(string):
    if isinstance(string, str):
        return len(string)
    else:
        return "Error: Please enter a string, not a numeric value."

def task4(integers):
    try:
        return sum(int(i) for i in integers if isinstance(i, int))
    except TypeError:
        return None

def task5(data):
    result = []
    try:
        for name, grades in data:
            avg_grade = sum(grades) / len(grades)
            result.append((avg_grade, name))
        return result
    except Exception:
        return "List processing error!"
