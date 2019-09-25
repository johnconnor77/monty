cmake_minimum_required(VERSION 3.14)
project(monty C)

set(CMAKE_C_FLAGS "-g -ggdb -Wall -Werror -Wextra -pedantic")

add_executable(monty
        main.c
        get_op_functions.c
        op_pall.c
        op_push.c
        free_dlistint.c
        _isdigit.c)