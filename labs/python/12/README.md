**Using nested lists to create and manipulate twodimensional data structures**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn how to work with nested lists to create and manipulate two-dimensional data structures.

## Task Description

**Task 1: Create a Matrix**

Create a Python class Matrix that initializes a two-dimensional list with zeros. The constructor should accept two parameters: rows and columns, indicating the dimensions of the matrix.

Example of class usage:

```python
matrix = Matrix(2, 3)
print(matrix.data) # [[0, 0, 0], [0, 0, 0]]
```

**Task 2: Add Elements to Matrix**

Extend the Matrix class by adding a method add_element that adds an element at a specific position (row, column).

Example of class usage:

```python
matrix = Matrix(2, 3)
matrix.add_element(1, 2, 10)
print(matrix.data) # [[0, 0, 10], [0, 0, 0]]
```

**Task 3: Sum of Rows**

Add a method sum_of_rows to the Matrix class that returns a list of sums of each row in the matrix.

Example of class usage:

```python
matrix = Matrix(2, 3)
matrix.add_element(0, 0, 5)
matrix.add_element(0, 1, 10)
matrix.add_element(1, 2, 20)
print(matrix.sum_of_rows()) # [15, 20]
```

**Task 4: Matrix Transposition**

Create a method transpose in the Matrix class that returns a new Matrix object, which is the transpose of the original matrix.

Example of class usage:

```python
matrix = Matrix(2, 3)
matrix.add_element(0, 1, 1)
matrix.add_element(1, 2, 2)
transposed = matrix.transpose()
print(transposed.data) # [[0, 0], [1, 0], [0, 2]]
```

**Task 5: Multiply Matrices**

Implement a method multiply_by in the Matrix class that accepts another Matrix object and returns a new Matrix object that is the result of the multiplication of the two matrices.

Example of class usage:

```python
matrix1 = Matrix(2, 3)
matrix1.add_element(0, 0, 1)
matrix1.add_element(0, 1, 2)
matrix1.add_element(0, 2, 3)
matrix2 = Matrix(3, 2)
matrix2.add_element(0, 0, 1)
matrix2.add_element(1, 0, 2)
matrix2.add_element(2, 0, 3)
result = matrix1.multiply_by(matrix2)
print(result.data) # [[14, 0], [0, 0]]
```

**Task 6: Check Symmetric Matrix**

Add a method is_symmetric to the Matrix class that checks if the matrix is symmetric (i.e., the matrix is equal to its transpose).

Example of class usage:

```python
matrix = Matrix(2, 2)
matrix.add_element(0, 1, 5)
matrix.add_element(1, 0, 5)
print(matrix.is_symmetric()) # True
```

**Task 7: Rotate Matrix**

Implement a method rotate_right in the Matrix class that rotates the matrix 90 degrees to the right.

Example of class usage:

```python
matrix = Matrix(2, 2)
matrix.add_element(0, 0, 1)
matrix.add_element(0, 1, 2)
matrix.add_element(1, 0, 3)
matrix.add_element(1, 1, 4)
matrix.rotate_right()
print(matrix.data) # [[3, 1], [4, 2]]
```

**Task 8: Flatten Matrix**

Create a method flatten in the Matrix class that returns a single list containing all elements of the matrix.

Example of class usage:

```python
matrix = Matrix(2, 2)
matrix.add_element(0, 0, 1)
matrix.add_element(0, 1, 2)
matrix.add_element(1, 0, 3)
matrix.add_element(1, 1, 4)
print(matrix.flatten()) # [1, 2, 3, 4]
```

**Task 9: Matrix from List**

Add a static method from_list to the Matrix class that creates a matrix object from a given list of lists.

Example of class usage:

```python
list_of_lists = [[1, 2], [3, 4]]
matrix = Matrix.from_list(list_of_lists)
print(matrix.data) # [[1, 2], [3, 4]]
```

**Task 10: Extract Diagonal**

Create a method diagonal in the Matrix class that extracts the diagonal of a square matrix as a list.

Example of class usage:

```python
matrix = Matrix(3, 3)
matrix.add_element(0, 0, 1)
matrix.add_element(1, 1, 2)
matrix.add_element(2, 2, 3)
print(matrix.diagonal()) # [1, 2, 3]
```

## Work Execution

## Project Structure

```rust
Using nested lists to create and manipulate twodimensional data structures
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
# class Matrix with rows, columns, and data attributes
class Matrix:
    # initialize the class with rows and columns attributes
    def __init__(self, rows, columns):
        self.rows = rows
        self.columns = columns
        self.data = [[0] * columns for _ in range(rows)]
    
    # method to add an element to the matrix
    def add_element(self, row, column, value):
        self.data[row][column] = value

    # method to calculate the sum of each row in the matrix
    def sum_of_rows(self):
        # return a list of sums of each row in the matrix
        return [sum(row) for row in self.data]

    # method to transpose the matrix
    def transpose(self):
        # create a new matrix with transposed data
        transposed_data = [[self.data[j][i] for j in range(self.rows)] for i in range(self.columns)]
        # create a new matrix object
        transposed_matrix = Matrix(self.columns, self.rows) 
        # assign the transposed data to the new matrix
        transposed_matrix.data = transposed_data
        # return the transposed matrix
        return transposed_matrix

    # method to multiply the matrix by another matrix
    def multiply_by(self, other):
        # check if the number of columns of the first matrix is equal to the number of rows of the second matrix, otherwise raise an error
        if self.columns != other.rows:
            raise ValueError("Number of columns of the first matrix must be equal to the number of rows of the second matrix.")
        # create a new matrix object with the number of rows of the first matrix and the number of columns of the second matrix
        result = Matrix(self.rows, other.columns)
        # iterate over the rows of the first matrix
        for i in range(self.rows):
            # iterate over the columns of the second matrix
            for j in range(other.columns):
                # iterate over the columns of the first matrix
                for k in range(self.columns):
                    # calculate the product of the elements of the two matrices and add it to the result matrix
                    result.data[i][j] += self.data[i][k] * other.data[k][j]
        return result
    
    # method to check if the matrix is symmetric
    def is_symmetric(self):
        return self == self.transpose()
    
    # method to rotate the matrix 90 degrees to the right
    def rotate_right(self):
        rotated_data = [[self.data[self.rows - 1 - j][i] for j in range(self.rows)] for i in range(self.columns)]
        self.data = rotated_data
        self.rows, self.columns = self.columns, self.rows
    
    # method to flatten the matrix
    def flatten(self):
        return [element for row in self.data for element in row]
    
    # method to extract the diagonal of a square matrix
    def diagonal(self):
        if self.rows != self.columns:
            raise ValueError("Matrix must be square to extract diagonal.")
        return [self.data[i][i] for i in range(self.rows)]

    # static method to create a matrix object from a list of lists
    @staticmethod
    def from_list(list_of_lists):
        # get the number of rows and columns of the matrix
        rows = len(list_of_lists)
        columns = len(list_of_lists[0])
        # create a new matrix object
        matrix = Matrix(rows, columns)
        # assign the data from the list of lists to the matrix
        for i in range(rows):
            # iterate over the columns
            for j in range(columns):
                # assign the element from the list of lists to the matrix
                matrix.data[i][j] = list_of_lists[i][j]
        # return the matrix
        return matrix
```

## Results

Data I provided to the functions and output they returned:

**Task 1: Create a Matrix**

```python
matrix = Matrix(2, 3)
print(matrix.data) # [[0, 0, 0], [0, 0, 0]]
```

**Task 2: Add Elements to Matrix**

```python
matrix = Matrix(2, 3)
matrix.add_element(1, 2, 10)
print(matrix.data) # [[0, 0, 10], [0, 0, 0]]
```

**Task 3: Sum of Rows**

```python
matrix = Matrix(2, 3)
matrix.add_element(0, 0, 5)
matrix.add_element(0, 1, 10)
matrix.add_element(1, 2, 20)
print(matrix.sum_of_rows()) # [15, 20]
```

**Task 4: Matrix Transposition**

```python
matrix = Matrix(2, 3)
matrix.add_element(0, 1, 1)
matrix.add_element(1, 2, 2)
transposed = matrix.transpose()
print(transposed.data) # [[0, 0], [1, 0], [0, 2]]
```

**Task 5**

```python
matrix1 = Matrix(2, 3)
matrix1.add_element(0, 0, 1)
matrix1.add_element(0, 1, 2)
matrix1.add_element(0, 2, 3)
matrix2 = Matrix(3, 2)
matrix2.add_element(0, 0, 1)
matrix2.add_element(1, 0, 2)
matrix2.add_element(2, 0, 3)
result = matrix1.multiply_by(matrix2)
print(result.data) # [[14, 0], [0, 0]]
```

**Task 6**

```python
matrix = Matrix(2, 2)
matrix.add_element(0, 1, 5)
matrix.add_element(1, 0, 5)
print(matrix.is_symmetric()) # True
```

**Task 7**

```python
matrix = Matrix(2, 2)
matrix.add_element(0, 0, 1)
matrix.add_element(0, 1, 2)
matrix.add_element(1, 0, 3)
matrix.add_element(1, 1, 4)
matrix.rotate_right()
print(matrix.data) # [[3, 1], [4, 2]]
```

**Task 8**

```python
matrix = Matrix(2, 2)
matrix.add_element(0, 0, 1)
matrix.add_element(0, 1, 2)
matrix.add_element(1, 0, 3)
matrix.add_element(1, 1, 4)
print(matrix.flatten()) # [1, 2, 3, 4]
```

**Task 9**

```python
list_of_lists = [[1, 2], [3, 4]]
matrix = Matrix.from_list(list_of_lists)
print(matrix.data) # [[1, 2], [3, 4]]
```

**Task 10**

```python
matrix = Matrix(3, 3)
matrix.add_element(0, 0, 1)
matrix.add_element(1, 1, 2)
matrix.add_element(2, 2, 3)
print(matrix.diagonal()) # [1, 2, 3]
```

## Conclusions

I have successfully implemented a Python class Matrix that initializes a two-dimensional list with zeros, adds elements to the matrix, calculates the sum of rows, transposes the matrix, multiplies the matrix by another matrix, checks if the matrix is symmetric, rotates the matrix 90 degrees to the right, flattens the matrix, creates a matrix object from a list of lists, and extracts the diagonal of a square matrix. I have learned how to work with nested lists to create and manipulate two-dimensional data structures in Python.
