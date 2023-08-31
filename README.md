
# Simple Shell

To wrap up our journey through Low-Level Programming, we're set to create a user-friendly UNIX command Interpreter using C.
## Table of Contents
* [Introduction](#Introduction)
  * What is Shell
* [Project Information](#Project-Information)
    * Tasks
    * General requirements
    * Used functions
* [Documentation](#Documentation)
    * Testing
    * Files
    * Flowchart
* [Authors](#Authors)
## Introduction

### What is Shell
A **shell** is a command-line interpreter, it is the computer program that provides a user interface to access the services of the operating system. Depending on the type of interface they use, shells can be of various types, in this case, a shell program ([Bourne Shell]) that is used for entering data into and displaying or printing data from, a computer or a computing system.
## Project Information

### Tasks

* Task 0. README, man_1_simple_shell, AUTHORS
* Task 1. Betty would be proud
* Task 2. Simple shell 0.1
* Task 3. Simple shell 0.2
* Task 4. Simple shell 0.3
* Task 5. Simple shell 0.4
* Task 6. Simple shell 1.0
* Task 7. What happens when you type ls -l in the shell
### General requirements
 * Allowed editors: vi, vim, emacs
 * All your files will be compiled on `Ubuntu 14.04 LTS`
 * Your C programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
 * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 * No more than 5 functions per file
 * All your header files should be include guarded
 * This shell should not have any memory leaks
 * Unless specified otherwise, your program must have the exact same output as `sh` (`/bin/sh`) as well as the exact same error output.
### Used functions

* all functions from string.h
* `isatty` (man 3 isatty)
* `free` (man 3 free)
* `fork` (man 2 fork)
* `execve` (man 2 execve)
* `wait` (man 2 wait)
* `exit` (man 3 exit)
* `stat` (__ xstat) (man 2 stat)
* `strtok` (man 3 strtok)
* `getline` (man 3 getline)
## Documantation
### Files

|File|Description|
|---|---|
|main_simple_shell.c|our simple_shell|
|read_line.c|Gets input|
|parse_line.c|Tokenizes a string|
|check_path.c|Get variable PATH|
|execute_line.c|Execute builtins and commands|
|free.c|free a 2d array|
|simple_shell.h|Prototypes functions and headers|
|man_simple_shell|Manual page our of Simple Shell|
|AUTHORS|Contributors in this repository|
|README.md|Information about our repository|

## Authors

This work was implemented by [Ezzehi Nour]