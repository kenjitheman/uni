def task1(nums):
    return sum(nums)

def task2(data):
    return len(data)

def task3(nums):
    sorted_nums = sorted(nums, reverse=True)
    return sorted_nums[0]

def task4(data):
    _dict = data[0]
    return _dict.get("name", None)

def task5(data):
    sorted_tupls = sorted(data, key=lambda x: len(x[0]))
    return sorted_tupls[-1][-1]

def task6(data):
    odd_nums = [num for sublist in data for num in sublist if num % 2 != 0]
    product = 1
    for num in odd_nums:
        product *= num
    return product

def task7(data):
    return sum(second for _, second in data)
