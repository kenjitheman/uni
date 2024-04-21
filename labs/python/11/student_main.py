def task1(nums):
    return sum(x**2 for x in nums)

def task2(nums):
    avg = sum(nums) / len(nums)
    return sum(x for x in nums if x >= avg)

def task3(nums):
    frequency = {}
    for num in nums:
        frequency[num] = frequency.get(num, 0) + 1
    return sorted(nums, key=lambda x: (-frequency[x], x))

def task4(nums):
    n = len(nums) + 1
    total_sum = n * (n + 1) // 2
    return total_sum - sum(nums)

def task5(nums):
    num_set = set(nums)
    longest_seq = 0
    for num in num_set:
        if num - 1 not in num_set:
            current_num = num
            current_seq = 1
            while current_num + 1 in num_set:
                current_num += 1
                current_seq += 1
            longest_seq = max(longest_seq, current_seq)
    return longest_seq

def task6(nums, k):
    k = k % len(nums)
    return nums[-k:] + nums[:-k]

def task7(nums):
    left_products = [1] * len(nums)
    right_products = [1] * len(nums)
    result = [1] * len(nums)

    for i in range(1, len(nums)):
        left_products[i] = left_products[i - 1] * nums[i - 1]

    for i in range(len(nums) - 2, -1, -1):
        right_products[i] = right_products[i + 1] * nums[i + 1]

    for i in range(len(nums)):
        result[i] = left_products[i] * right_products[i]

    return result

def task8(nums):
    max_sum = float('-inf')
    current_sum = 0
    for num in nums:
        current_sum = max(num, current_sum + num)
        max_sum = max(max_sum, current_sum)
    return max_sum

def task9(matrix):
    result = []
    while matrix:
        result += matrix.pop(0)
        matrix = list(zip(*matrix))[::-1]
    return result

def task10(points, k):
    return sorted(points, key=lambda x: x[0]**2 + x[1]**2)[:k]
