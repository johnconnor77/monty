# 0x19. C - Stacks, Queues - LIFO, FIFO

---
## The Monty Language Interpreter
The main goal of this project is learning about stacks and queues and how to implement it by using monty scripts (files that extends with .m).

## Environment
Ubuntu 14.04 LTS using Vagrant in VirtualBox

## Description
What you should learn from this project:

* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables
* How to work with git submodules
---

## Opcodes 

|  Opcode Name  | Opcode Description |
|-------------- |------------------- |
| push          | Pushes an element on to the stack |
| pall          | Prints all the values on the stack, starting from the top |
| pint          | Prints the value at the top of the stack |
| pop           | Removes the top element of the stack |
| swap          | Swaps the top two elements of the stack |
| add           | Adds the top two elements of the stack |
| nop           | Doesn't do anything* |
| sub           | Subtracts the top element of the stack from the second top element of the stack |
| div           | Divides the second top element of the stack by the top element of the stack |
| mul           | Multiplies the second top element of the stack with the top element of the stack |
| mod           | Computes the modulus of the second top element of the stack with the top element of the stack |
| comments (#)  | Adds a # to the beginning of a line to put a comment in the file |
| pchar         | Prints the char at the top of the stack |
| pstr          | Prints the string starting at the top of the stack |


Authors:
* **Juan A. Londoño** - *Initial Work and Documentación* - [jalondono](https://github.com/jalondono)
* **Juan F. Calle** - *Initial Work and Documentación* - [johnconnor77](https://github.com/johnconnor77)
