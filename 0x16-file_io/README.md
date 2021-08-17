# 0x16. C - File I/O
###  By Ron Olsen, Student at Holberton School
### using requirements of Julien Barbier, co-founder & CEO Holberton School
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
- What are and how to use the flags O\_RDONLY, O\_WRONLY, O\_RDWR
-What are file permissions, and how to set them when creating a file with the open system call
-What is a system call
-What is the difference between a function and a system call
## Requirements
### General
- Allowed editors: vi, vim, emacs
- All  files  compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All  files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- Allowed syscalls: read, write, open, close
- Allowed to use _putchar
- The prototypes of all functions and the prototype of the function _putchar is included in header file called holberton.h
- header files should be include guarded
## Tasks
- [x] README.md
- [x] .gitignore
- [x] holberton.h
- [ ] 0-read\_textfile.c
- [ ] 1-create\_file.c
- [ ] 2-append\_text\_to\_file.c
- [ ] 3-cp.c
