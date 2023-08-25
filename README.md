# C++ Data Structures
## Introduction
Welcome to the C++ Data Structures Repository! This project is a collection of common data structures implemented in C++, alongside useful methods and functions tailored to solve various frequently encountered problems.

## Motivation
This repository primarily serves as a self-learning resource. While the material is geared towards my personal growth, I truly believe in the power of community and collaborative learning. As such, anyone and everyone is welcome to pull the code, play around, and dive into the world of data structures.

## Why C++?
The choice of C++ was deliberate. C++ strikes an elegant balance: it provides high-level functionality while remaining "close to the metal". This unique positioning offers a profound understanding of the underlying systems and memory management, essential for anyone looking to deepen their insights into computer science and software engineering.

## Structure

The root directory of the project contains a `main.cpp` entrypoint, and header files and source code files for individual data structures are stored within appropriately named data structures in the root directory.
At present, the implemented data structures are:

* Singly Linked List
* Doubly Linked List
* Stack (built on a SLL)
* Queue (built on a SLL)

## Getting Started
Clone the Repository:

```bash
git clone https://github.com/jakegodsall/datastructures-cpp.git
```

Navigate to the cloned directory and explore the implementations.

If you have `g++` or any C++ compiler installed, you can compile any of the data structures and test them out.

## Contributions
While the primary objective of this repository is self-learning, I'm open to contributions. If you have any optimizations, improvements, or new data structure implementations to suggest, please feel free to make a pull request or open an issue.

## Feedback
If you have any feedback, questions, or want to engage in a discussion about any of the implementations, please open an issue. I'm always eager to learn and grow, and community insights are invaluable in this journey.

## License
This project is open-source and available to everyone. Please reference this repository if you use any parts of it in your projects.

## Comments

You will notice that the code in this repository does not abide by all the rules of good software development. Most visibly, I have not followed the DRY principle (dont't repeat yourself).

This is for good reason. I have purposely repeated some definitions, for example singly linked list nodes for implementing a stack or a queue, in order to practice as much as possible writing such implementations.

This repository is, afterall, primarily for learning purposes.

## Acknowledgements
I owe a great deal of gratitude to [Scott Barrett](https://scottbarrett.com/) for the fantastic course on Udemy, [C++ Data Structures & Algorithms + LEETCODE Exercises](https://www.udemy.com/course/data-structures-algorithms-cpp/).
This is where the majority of my learning has taken place regarding the implementation of the data structures.

For the majority of methods applied on these data structures, they are my personal solutions to DSA problems from [Leetcode](https://leetcode.com/), adapted for the specific implementations defined in this repository.