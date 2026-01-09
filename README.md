# Self-Adjusting Linked List in C++

A **Self-Adjusting Linked List** implemented in C++ that automatically moves accessed elements to the front of the list. This improves the efficiency of repeated searches for frequently accessed items. The program provides an interactive menu to insert, find, and display elements.

---

## Features

- **Insert values** into the list
- **Find values** and automatically move them to the front (Move-to-Front heuristic)
- **Display all elements** in the list
- **Dynamic memory management** using constructors and destructors
- **Interactive command-line interface**

---

## How It Works

1. When a new element is inserted, it is added to the **front of the list**.
2. When searching for an element:
   - If the element is found, it is **moved to the front** of the list.
   - If not found, the program informs the user.
3. Displaying the list prints all current elements from front to end.

This behavior ensures that frequently accessed elements are quicker to reach, demonstrating a basic self-adjusting data structure.

---
## Example Usage

<img width="737" height="663" alt="image" src="https://github.com/user-attachments/assets/841cad5c-b326-4fb8-af21-6b0239637b02" />

---

## Requirements

- C++ Compiler (e.g., g++, clang++)
- Compatible with **C++11 or higher**
