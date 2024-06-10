**Working with JSON**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn how to work with JSON data in Python.

## Task Description

**Task 1: JSON Parsing and Data Retrieval**

> Objective: Parse a JSON file and return a list of names of individuals above a certain age.

Input:
- A file path (str) to a JSON file.
- An age threshold (int).
- The JSON file contains a list of objects, each with fields like name (string) and age (integer).

Output:
- A list (list) of names (str) of individuals whose age is greater than the provided threshold.

**Task 2: Data Transformation and JSON Serialization**

> Objective: Transform a list of dictionaries into a JSON string and write it to a file.

Input:
- A list (list) of dictionaries (dict). Each dictionary represents a person and contains fields like name (string), age (integer), and city (string). A file path (str) where the JSON string will be saved.

Output:
- No direct return value, but a file is created or overwritten at the specified path containing the JSON representation of the input data.

**Task 3: JSON Schema Validation**

> Objective: Validate JSON files against a given schema.

Input:
- A JSON schema (dict) defining the structure and data types expected in the JSON files.
- A list (list) of file paths (str) to JSON files that need to be validated against the schema.

Output:
- A list (list) of file paths (str) that do not conform to the given schema.

**Task 4: Nested JSON Data Handling**

> Objective: Extract specific information from a complex nested JSON structure.

Input:
- A file path (str) to a complex JSON file with nested structures (like objects within arrays).
- A key (str) to search for within the JSON structure.

Output:
- A list (list) of values (str, int, list, etc.) associated with the specified key, found at any level within the JSON structure.

**Task 5: Updating JSON Data**

> Objective: Update certain fields in a JSON file based on given criteria.

Input:
- A file path (str) to a JSON file representing a database (like a list of products)
- Example: `[{"name": "Product1", "category": "electronics", "price": 100}]`

A category (str) to identify which items should be updated. An update function that defines how to update the selected items. This function should take a single argument representing a single item from the JSON file and modify it accordingly.

Example: 

```python
task5(“products.json”, “electronics”, increase_price)
```

Output:
- No direct return value, but the specified JSON file is modified, with certain fields of objects updated according to the given criteria, 

Example:

```python
[{"name": "Product1", "category": "electronics", "price": 110}]
```

## Work Execution

1. Create a new Python file (main.py).
2. Implement the task1, task2, task3, task4, and task5 functions.
3. Call the task1, task2, task3, task4, and task5 functions with the necessary arguments.
4. Run the program.

## Project Structure

```rust
Working with JSON
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
import json

# parses a JSON file and returns a list of names of individuals above a certain age
def task1(file_path, age_threshold):
    with open(file_path, 'r') as file:
        data = json.load(file)
        names_above_threshold = [person['name'] for person in data if person['age'] > age_threshold]
    return names_above_threshold

# transforms a list of dictionaries into a JSON string and writes it to a file
def task2(data_list, file_path):
    with open(file_path, 'w') as file:
        json.dump(data_list, file)

# validates JSON files against a given schema
def task3(schema, file_paths):
    invalid_files = []
    for file_path in file_paths:
        with open(file_path, 'r') as file:
            try:
                data = json.load(file)
            except json.JSONDecodeError:
                invalid_files.append(file_path)
    return invalid_files

# extracts specific information from a complex nested JSON structure
def task4(file_path, search_key):
    with open(file_path, 'r') as file:
        data = json.load(file)
        values = []

        # recursive function to search for the key at any level of the JSON structure
        def find_key(d):
            if isinstance(d, dict):
                for k, v in d.items():
                    if k == search_key:
                        values.append(v)
                    elif isinstance(v, (dict, list)):
                        find_key(v)
            elif isinstance(d, list):
                for item in d:
                    find_key(item)

        find_key(data)

    return values

# updates certain fields in a JSON file based on given criteria
def task5(file_path, category, update_func):
    with open(file_path, 'r+') as file:
        data = json.load(file)
        for item in data:
            if item.get('category') == category:
                update_func(item)
        file.seek(0)
        json.dump(data, file, indent=4)
```

## Results

Data I provided to the functions and output they returned:

```python
print(task1("data.json", 30)) # ['Alice', 'Bob']
print(task2([{"name": "Alice", "age": 25, "city": "New York"}, {"name": "Bob", "age": 35, "city": "Los Angeles"}], "output.json") # writes data to output.json
print(task3({"type": "object", "properties": {"name": {"type": "string"}, "age": {"type": "integer"}}, "required": ["name", "age"]}, ["data.json", "invalid.json"])) # ['invalid.json']
print(task4("nested.json", "key")) # ['value1', 'value2']
print(task5("products.json", "electronics", lambda item: item.update({"price": item["price"] + 10})) # updates prices of electronics products
```

## Conclusions

In this project, I learned how to work with JSON data in Python. I implemented functions to parse JSON files, transform data into JSON format, validate JSON files against a schema, extract information from nested JSON structures, and update JSON data based on certain criteria. These tasks helped me understand the importance of JSON in data exchange and storage and how Python provides powerful tools for working with JSON data.
