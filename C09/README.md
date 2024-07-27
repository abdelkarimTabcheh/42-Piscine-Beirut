# C09 42 Piscine Project

## Introduction

The C09 project focuses on building and managing libraries, writing makefiles, and working with file I/O in C. These tasks are essential for organizing larger codebases and automating the build process. This project will help you understand how to create reusable code libraries, use makefiles for compilation, and manage file operations.

## Core Concepts

- **Library Creation**: Learn how to create and manage static libraries in C.
- **Makefiles**: Understand the syntax and usage of makefiles to automate the build process.
- **String Manipulation**: Gain proficiency in splitting strings and managing memory.

## Advanced Concepts

- **Shell Scripting**: Develop the ability to write shell scripts for automating tasks.
- **Build Automation**: Explore the use of makefiles to streamline the compilation and linking process.
- **Dynamic Memory Management**: Handle dynamic memory allocation and deallocation effectively.

## Projects

### EX00: `libft_creator.sh`
Write a shell script `libft_creator.sh` that creates a static library named `libft.a` from a set of C source files. The script should:
- Compile the source files into object files.
- Archive the object files into the static library `libft.a`.

### EX01: `Makefile`
Create a `Makefile` that automates the compilation process for a project. The `Makefile` should include:
- Rules for compiling individual source files.
- A rule for creating the static library `libft.a`.
- Rules for cleaning up object files and the static library.

### EX02: `ft_split.c`
Implement the function `ft_split` that splits a string into an array of strings based on a given delimiter. The function should:
- Allocate memory dynamically for the array of strings.
- Handle edge cases, such as multiple consecutive delimiters and empty strings.
- Return the array of strings, terminated by a `NULL` pointer.

## Learning Outcomes

By completing these exercises, you will:
- Enhance your ability to create and manage static libraries.
- Gain experience with writing and using makefiles for build automation.
- Improve your skills in string manipulation and dynamic memory management.
- Learn to write shell scripts for automating common development tasks.

## Resources

For more detailed information and guidance, you can refer to the [42 project's GitHub repositories](https://github.com/42School) or explore specific resources on C programming, makefiles, and shell scripting.

---

Happy coding!
