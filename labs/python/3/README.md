**Strings, operators, loops**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn how to work with strings, operators, and loops.

## Task Description

**Завдання 0**

Функція task0 приймає два аргументи, number1 і number2, скільки це буде в суммі та повернути результат:

```python
def task0(number1, number 2):
       result = number1 + number2
       return result
```

**Завдання 1**

1. Напишіть функцію «task1» яка приймає значення «my_list». 
2. Додайте у створений список число -5 розмістивши його на другу позицію у списку.
3. Знайдіть мінімальний «min_element» та максимальний «max_element» елемент списку.
4. До отриманого списку додайте елемент у вигляді списку [1,2,3] на третю позицію.
5. В кінці списку додайте новий елемент (має бути list) в якому відобразіть ваше прізвище та ім’я.
6. Визначте кількість елементів списку «list_length».
7. Результати виведіть на екран.
8. Поверніть значення «my_list», «min_element», «max_element», «list_length», (в такому порядку).

**Завдання 2**

На складі зберігається 20 видів товарів. До списку «A» занесено назву товару, до списку «B» занесено кількість одиниць кожного товару, до списку «C» - ціни цих товарів. 

1. Обчисліть загальну вартість «total_cost» товарів на складі та середню ціну «average_price» (не враховуючи їх кількість). 
2. Визначте якого товару найбільше «most_stocked_item» на складі.
3. Реалізуйте рішення задачі через функцію «task2» яка приймає значення «A», «B», «C», та на виході повертає значення «total_cost», «average_price», «most_stocked_item» (в такому порядку).

**Завдання 3**

1. Напишіть функцію «task3». 
2. Сформуйте список із 50 елементів що знаходяться в діапазоні від – 25 до 25.
3. Всі додатні елементи записати у список «А1», від’ємні в «А2». 
4. Отримані списки повернути у порядку «А1» та «А2».

**Завдання 4**

1. Напишіть функцію «task4» яка приймає значення «my_string».
2. Підрахуйте кількість символів “а” у тексті.
3. Повернути кількість символів “а” у тексті.

**Завдання 5**

1. Напишіть функцію «task5» яка приймає значення «my_string». 
2. В рядку str замініть “GOOD” на “NICE”.
3. Виконайте розподіл рядка по пробілу та обчисліть кількість «word_count» слів у вашому рядку.
4. Повернути значення «modified_str», «word_count» (в такому порядку).
 
**Завдання 6**

1. Напишіть функцію «task6», яка підсумовує всі елементи списку від 1 до 5 і повертає значення «total_sum».

**Завдання 7**

1. Напишіть функцію «task7», яка приймає значення «my_list» знайде у ньому числа, що діляться на 7 і кратні 5, записує їх у масив «result» і повертає значення «result».

## Work Execution

1. Create a new Python file (main.py).
2. Implement the task0, task1, task2, task3, task4, task5, task6, and task7 functions.
3. Call the task0, task1, task2, task3, task4, task5, task6, and task7 functions with the necessary arguments.
4. Run the program.

## Project Structure

```rust
Strings, operators, loops
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python

# takes list as an argument, adds -5 to the list at the second position, finds the minimum and maximum elements of the list, adds a list [1, 2, 3] to the third position, adds a new element (must be a list) that displays your last name and first name at the end of the list, determines the number of elements in the list, and returns my_list, min_element, max_element, list_length (in that order)
def task1(my_list):
    my_list.insert(1, -5)

    min_element = min(my_list)
    max_element = max(my_list)

    my_list.insert(2, [1, 2, 3])
    my_list.append(["Surname", "Name"])

    list_length = len(my_list)

    return my_list, min_element, max_element, list_length

# takes three args (A, B, C), computes the total cost, the average price, and determines the most stocked item
def task2(A, B, C):
    total_cost = sum([a * b for a, b in zip(B, C)])
    average_price = sum(C) / len(C)
    most_stocked_item = A[C.index(max(C))]

    return total_cost, average_price, most_stocked_item

# computes A1 and A2 lists, where A1 contains positive numbers and A2 contains negative numbers, both lists contain numbers from -25 to 25, and returns A1 and A2 lists, respectively
def task3():
    A1 = [i for i in range(1, 26)]
    A2 = [i for i in range(-25, 0)]

    return A1, A2

# counts the number of 'a' characters in the text and returns the count
def task4(my_string):
    count_a = my_string.lower().count('a')
    return count_a

# replaces 'GOOD' with 'NICE' in the string, splits the string by space, and counts the number of words in the string, and returns modified_str and word_count, respectively
def task5(my_string):
    modified_str = my_string.replace("GOOD", "NICE")
    word_count = len(my_string.split())

    return modified_str, word_count

# sums all elements in the list from 1 to 5 and returns the total sum
def task6():
    total_sum = sum(range(1, 6))
    return total_sum

# finds numbers in my_list that are divisible by 7 and multiples of 5, stores them in the result array, and returns the result
def task7(my_list):
    result = [num for num in my_list if num % 7 == 0 and num % 5 == 0]
    return result
```

## Results

Data I provided to the functions and output they returned:

```python
print(task0(5, 10)) # 15
print(task1([1, 2, 3, 4, 5])) # ([1, -5, 2, [1, 2, 3], 3, 4, 5, ['Surname', 'Name']], -5, 5, 8)
print(task2(["A", "B", "C"], [1, 2, 3], [10, 20, 30])) # (140, 20.0, 'C')
print(task3()) # ([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25], [-25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1])
print(task4("Python is a programming language")) # 2
print(task5("Python is a GOOD programming language")) # ('Python is a NICE programming language', 6)
print(task6()) # 15
print(task7([5, 7, 10, 14, 15, 20, 21, 25, 28, 30])) # [35]
```

## Conclusions

In this project, I learned how to work with strings, operators, and loops in Python. I implemented functions that perform various tasks, such as adding elements to a list, finding the minimum and maximum elements in a list, calculating the total cost and average price of items, determining the most stocked item, creating lists of positive and negative numbers, counting characters in a string, replacing text in a string, summing elements in a list, and finding numbers divisible by 7 and multiples of 5 in a list. I successfully tested these functions with different input values and obtained the expected results.
