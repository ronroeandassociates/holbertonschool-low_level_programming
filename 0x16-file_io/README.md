# 0x16. C - File I/O

_By Ron Olsen, Student :student: at **Holberton School**._

> using requirements of Julien Barbier, co-founder & CEO Holberton School

## Resources

### Read or watch:

- File descriptors
- C Programming in Linux Tutorial #024 - open() read() write() Functions

### man or help:

- open
- close
- read
- write
- dprintf

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
  -What are file permissions, and how to set them when creating a file with the open system call
  -What is a system call
  -What is the difference between a function and a system call

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All files compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- Allowed syscalls: read, write, open, close
- Allowed to use \_putchar
- The prototypes of all functions and the prototype of the function \_putchar is included in header file called holberton.h
- header files should be include guarded

## Tasks

- [x] README.md
- [x] .gitignore
- [x] holberton.h
- [x] 0-read_textfile.c
- [x] 1-create_file.c
- [x] 2-append_text_to_file.c
- [x] 3-cp.c

<p align="center">
<img src="../images/roeHR-01.png" width=10% height=10%>
</p>
