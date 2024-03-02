def task1(a, b, c):
    return max(a, b, c)

def task2(numbers):
    return sum(numbers)

def task3(numbers):
    result = 1
    for num in numbers:
        result *= num
    return result

def task4(s):
    return s[::-1]

def task5(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * task5(n-1)

def task6(num):
    return 25 <= num <= 50

def task7(s):
    upper_count = sum(1 for char in s if char.isupper())
    lower_count = sum(1 for char in s if char.islower())
    return upper_count, lower_count

def task8(input_list):
    return list(set(input_list))

def task9(input_list):
    return [num for num in input_list if num % 2 == 0]

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
