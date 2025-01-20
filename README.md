# C++ Module 08 - Templated Containers, Iterators, Algorithms

This module explores advanced concepts in C++ programming, focusing on templated containers, iterators, and algorithms. These skills will enhance your understanding of the Standard Template Library (STL) and prepare you to write efficient, reusable, and robust C++ code.

## Project Purpose

The purpose of this module is to deepen your understanding of templates, iterators, and algorithm usage in C++. Through a series of practical exercises, you will implement custom containers and algorithms while mastering the use of STL features.

This project is also a stepping stone toward becoming proficient in designing and manipulating data structures in C++.

## Exercises Overview

### Exercise 00: Easy Find
- **Objective**: Implement a templated `easyfind` function that searches for the first occurrence of an integer in a container. If the integer is not found, throw an exception or return an error value.
- **Why This Exercise?** This task introduces function templates, container traversal, and exception handling, laying the foundation for working with generic algorithms.

---

### Exercise 01: Span
- **Objective**: Develop a `Span` class to store up to N integers, allowing computation of the shortest and longest spans (or distances) between stored numbers. Add support for bulk addition of elements using a range of iterators.
- **Why This Exercise?** This exercise focuses on class design, iterator usage, and handling large datasets efficiently. It also introduces dynamic member function implementation for enhanced functionality.

---

### Exercise 02: Mutated Abomination
- **Objective**: Create a `MutantStack` class by extending the `std::stack` container, adding support for iteration through its elements. Ensure compatibility with other STL containers.
- **Why This Exercise?** This task demonstrates how to adapt STL containers to meet custom requirements, emphasizing iterator implementation and object interaction.

---

## Compilation and Testing

Each exercise is organized in its respective directory (`ex00/`, `ex01/`, `ex02/`). To compile and test your code, navigate to the corresponding directory and use the provided Makefile:

```bash
# Navigate to the exercise directory
cd ex00

# Compile the code
make

# Run the program
./easyfind
