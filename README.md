# 0x19. C - Stacks, Queues - LIFO, FIFO

---
## The Monty Language Interpreter
The main goal of this project is learning about stacks and queues and how to implement it by using monty scripts (files that extends with .m).

<img align="center" src="https://www.lavanguardia.com/r/GODO/LV/p5/WebSite/2018/03/24/Recortada/LV_20140626_LV_VIDA_D_54411314884-kS1G-U441898494926eS-992x558@LaVanguardia-Web.jpg" width="100%"/>

## Environment
Ubuntu 14.04 LTS using Vagrant in VirtualBox

## How to install
1. Clone the repository below

`https://github.com/johnconnor77/monty`

2. Compile the program again (optional)

`gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

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
| rotl          | rotates the stack to the top |
| rotr          | rotates the stack to the bottom |


## Other Files

File Name | Description
--- | ---
`main.c` | Main file for the program
`get_op_functions.c` | Returns the correct opcode for usage
`monty.h` | Header file with prototype functions
`_isdigit.c` | function that checks if an element is a digit or not
`free_delistint.c` | function to free's a double linked list
`bytecodes/` | folder with Monty codes used to test opcode functions
`cmake-build-debug/ .idea/` | folders with aux variables for Clion runtime
`CMakeLists.txt` | contains variables for makefile with Clion runtime

## Example Usage
```
USER$ cat -e bytecodes/00.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$

USER$ ./monty ./bytecodes/00.m
3
2
1
0
6
5
4
3
2
1
0
USER$
```



Authors:
* **Juan A. Londoño** - *Initial Work and Documentación* - [jalondono](https://github.com/jalondono)
* **Juan F. Calle** - *Initial Work and Documentación* - [johnconnor77](https://github.com/johnconnor77)
