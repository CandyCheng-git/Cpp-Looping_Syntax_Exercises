
# C++ Looping Syntax Exercises

This repository contains a simple C++ program that demonstrates basic `while` loop syntax and the use of `cout` for console output. The code solves a specific problem where it performs integer operations within a loop, outputting a result based on the problem's conditions.

## Table of Contents
- [Introduction](#introduction)
- [Question-1](#Question-1)
- [Installation](#Installation)

## Introduction

The purpose of this program is to provide a basic exercise on C++ loops and syntax. 
The program outputs a welcome message, performs calculations in a loop, and finally outputs the result.


### Question-1

```cpp
    // Question 1
    cout << "Question 1 \n";
    int n = 2023;
    while (n % 4 == 3) {
        n = (n / 2) * 2 - 3;
    }
    cout << n << "\n";
```

#### Question-1-Answer
```
-1
```


## Installation

To compile and run this program, ensure you have a C++ compiler installed, such as g++.

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/looping-syntax-exercises.git
    ```
2. Navigate to the project directory:
    ```bash
    cd looping-syntax-exercises
    ```
3. Compile the code:
    ```bash
    g++ main.cpp -o looping_exercise
    ```



