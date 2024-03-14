def task1(dict_list):
    merged_dict = {}
    for d in dict_list:
        for key, value in d.items():
            merged_dict[key] = value
    return merged_dict

def task2(s):
    arr = []
    for i in range(0, len(s), 8):
        arr.append(int(s[i:i+8], 16))
    return arr

def task3(arr):
    unique_values = []
    for item in arr:
        if item not in unique_values:
            unique_values.append(item)
    return unique_values

def task4(arr):
    full_range = set(range(10, 21))
    for num in full_range:
        if num not in arr:
            return num

def task5(data):
    values = []
    for d in data:
        for val in d.values():
            if val not in values:
                values.append(val)
    return values

def task6(dicts):
    keys = set()
    for d in dicts:
        keys.update(d.keys())
    return len(keys)

def task7(data):
    sorted_keys = sorted(data.keys(), reverse=True)
    return sorted_keys[:3]

def task8(dict_list):
    combined_dict = {}
    for d in dict_list:
        item = d['item']
        amount = d['amount']
        combined_dict[item] = combined_dict.get(item, 0) + amount
    return combined_dict
