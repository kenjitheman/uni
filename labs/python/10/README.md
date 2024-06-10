**OOP**

## Requirements
- python 3.x

## Usage

```sh
python main.py
```

## Objective

To get acquainted with the Python programming language. Learn how to work with OOP in Python.

## Task Description

**Task 1: Class Creation**

Create a Python class named “Student” with the following attributes: - name - age - grade

Example of class usage:

```python
student = Student(name="Ivan", age=30, grade="2")
```

**Task 2: Create Method**

Add a method named display_info() to the Student class that prints the student’s name, age, and grade in the format “Name: [name], Age: [age], Grade: [grade]”.

Example of class usage:

```python
student = Student(name="Ivan", age=30, grade="2")
print(student.display_info()) # Name: Ivan, Age: 30, Grade: 2
```

**Task 3: Inheritance**

Create two classes: Animal and Dog. Animal should have attributes name and sound. Add a make_sound() method to Animal that returns the string “[name]: [sound]”. Dog should inherit from Animal and have an additional attribute breed.

Example of class usage:

```python
animal = Animal(name="Lala", sound="  ")
dog = Dog(name="Lala", sound="Auuuuuuu", breed="Spitz")
print(animal.make_sound()) # Lala:  
print(dog.make_sound()) # Lala: Auuuuuuu
```

**Task 4: Polymorphism**

Create a class Bird with a method fly() that returns None. Then create two subclasses: Sparrow and Penguin. Override the fly() method in Sparrow to return the string “Sparrow flies high” and in Penguin to return the string “Penguin cannot fly”.

Example of class usage:

```python
bird = Bird()
sparrow = Sparrow()
penguin = Penguin()
print(bird.fly()) # None
print(sparrow.fly()) # Sparrow flies high
print(penguin.fly()) # Penguin cannot fly
```

**Task 5: Encapsulation**

Create a class Encapsulation with the following attributes:
- public
- _private
- __protected

Example of class usage:

```python
obj = Encapsulation(1, 2, 3)
print(obj.public) # 1
print(obj._private) # 2
print(obj._Encapsulation__protected) # 3
print(obj.__protected) # AttributeError
```

**Task 6: Rectangle**

Create a Rectangle class that has width and height attributes, and a calculate_perimeter() method that returns the perimeter of the shape.

Example of class usage:

```python
rectangle = Rectangle(width=5, height=4)
print(rectangle.calculate_perimeter()) # 18
```

**Task 7: AverageCalculator**

Create an AverageCalculator class that has a numbers attribute and takes a list of integers. The class should have a calculate_average() method that returns the arithmetic mean of the numbers in the list.

Example of class usage:

```python
numbers = [5, 10, 15, 20]
avg_calculator = AverageCalculator(numbers)
print(avg_calculator.calculate_average()) # Expected output: 12.5
```

## Work Execution

1. Create a new Python file (main.py).
2. Implement the Student, Animal, Dog, Bird, Sparrow, Penguin, Encapsulation, Rectangle, and AverageCalculator classes.
3. Call the necessary methods and classes with the necessary arguments.
4. Run the program.

## Project Structure

```rust
OOP
├── main.py // main program code
└── README.md // README file with detailed explanation
```

## Description of Main Functions and Methods

```python
# class Student with name, age, and grade attributes
class Student:
    # initialize the class with name, age, and grade attributes
    def __init__(self, name, age, grade):
        self.name = name
        self.age = age
        self.grade = grade
    
    # method to display the student's information
    def display_info(self):
        return f"Name: {self.name}, Age: {self.age}, Grade: {self.grade}"

# class Animal with name and sound attributes
class Animal:
    # initialize the class with name and sound attributes
    def __init__(self, name, sound):
        self.name = name
        self.sound = sound
    
    # method to make the animal sound
    def make_sound(self):
        return f"{self.name}: {self.sound}"

# class Dog inheriting from Animal with an additional breed attribute
class Dog(Animal):
    # initialize the class with name, sound, and breed attributes
    def __init__(self, name, sound, breed):
        super().__init__(name, sound)
        self.breed = breed

# class Bird with a fly() method that returns None
class Bird:
    # method to fly (returns None)
    def fly(self):
        return None

# class Sparrow inheriting from Bird with an overridden fly() method
class Sparrow(Bird):
    def fly(self):
        return "Sparrow flies high"

# class Penguin inheriting from Bird with an overridden fly() method
class Penguin(Bird):
    # method to fly (returns "Penguin cannot fly")
    def fly(self):
        return "Penguin cannot fly"

# class Encapsulation with public, _private, and __protected attributes
class Encapsulation:
    # initialize the class with public
    def __init__(self, public, private, protected):
        # set the public, _private, and __protected attributes
        self.public = public
        self._private = private
        self.__protected = protected

# class Rectangle with width and height attributes and a calculate_perimeter() method
class Rectangle:
    # initialize the class with width and height attributes
    def __init__(self, width, height):
        self.width = width
        self.height = height
    
    # method to calculate the perimeter of the rectangle
    def calculate_perimeter(self):
        return 2 * (self.width + self.height)

# class AverageCalculator with a numbers attribute and a calculate_average() method
class AverageCalculator:
    # initialize the class with numbers attribute
    def __init__(self, numbers):
        self.numbers = numbers
    
    # method to calculate the average of the numbers
    def calculate_average(self):
        return sum(self.numbers) / len(self.numbers)
```

## Results

Data I provided to the functions and output they returned:

**Task 1**

```python
student = Student(name="Ivan", age=30, grade="2")
print(student.display_info()) # Name: Ivan, Age: 30, Grade: 2
```

**Task 2**

```python
animal = Animal(name="Lala", sound="  ")
dog = Dog(name="Lala", sound="Auuuuuuu", breed="Spitz")
print(animal.make_sound()) # Lala:
print(dog.make_sound()) # Lala: Auuuuuuu
```

**Task 3**

```python
animal = Animal(name="Lala", sound="  ")
dog = Dog(name="Lala", sound="Auuuuuuu", breed="Spitz")
print(animal.make_sound()) # Lala:  
print(dog.make_sound()) # Lala: Auuuuuuu
```

**Task 4**

```python
bird = Bird()
sparrow = Sparrow()
penguin = Penguin()
print(bird.fly()) # None
print(sparrow.fly()) # Sparrow flies high
print(penguin.fly()) # Penguin cannot fly
```

**Task 5**

```python
obj = Encapsulation(1, 2, 3)
print(obj.public) # 1
print(obj._private) # 2
print(obj._Encapsulation__protected) # 3
print(obj.__protected) # AttributeError
```

**Task 6**

```python
rectangle = Rectangle(width=5, height=4)
print(rectangle.calculate_perimeter()) # 18
```

**Task 7**

```python
numbers = [5, 10, 15, 20]
avg_calculator = AverageCalculator(numbers)
print(avg_calculator.calculate_average()) # Expected output: 12.5
```

## Conclusions

In this project, I implemented various classes and methods to demonstrate object-oriented programming concepts such as inheritance, encapsulation, polymorphism, and more. By creating and using these classes, I was able to showcase the power and flexibility of OOP in Python.
