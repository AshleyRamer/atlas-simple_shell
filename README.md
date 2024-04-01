# ATLAS-SIMPLE_SHELL PROJECT
This README file is for the "Simple Shell" project. Creators are Ashley Ramer and Tamara Walling. This project is due on Tuesday, April 2, 2024 at Atlas School in Tulsa, Oklahoma.

## Flow Chart
```

 ---------------            -----------------
|     Start     |--------->|  Input Command? |
 ---------------            -----------------
        |
        |
        v
 --------------
| Read Command |
 --------------
        |
        |
        v
 -------------------          ----------
| Command = "exit"? |------->|   Exit   |
 -------------------          ----------
        |
        |
        v
 -----------------
| Command = "cd"? |-------> -----------------------
 -----------------         |    Change Directory   |
        |                   -----------------------
        |                            |
        |                            |
        |                            v
        |                   ---------------------
        +------------------| Execute External    |
                           |      Program        |
                            ---------------------
                                    |
                                    |
                                    v
                           ---------------------
                          |   Execute Command   |
                           ---------------------
                                    |
                                    |
                                    v
                              --------------
                             |     End      |
                              --------------


```

## Description
A simple shell, also known as a command-line interpreter or CLI (Command Line Interface), is a program that provides a text-based interface for users to interact with the operating system by entering commands. It reads commands from the user, interprets them, and then executes the corresponding programs or actions.

Here are some key features and functionalities of a simple shell:
+ Command Execution: It allows users to execute various system commands and programs by typing their names into the shell.
+ Input/Output Redirection: Users can redirect input and output streams of commands, enabling operations like writing output to files or reading input from files.
+ Piping: Users can connect the output of one command as the input to another, enabling more complex command sequences.
+ Environment Variable Manipulation: Users can set, unset, and view environment variables, which are key-value pairs used by programs to configure behavior.
+ Scripting: Users can write shell scripts, which are sequences of shell commands saved in a file for later execution.
+ Error Handling: The shell should handle errors gracefully, providing informative error messages when commands fail.

Implementing a simple shell involves parsing user input, interpreting commands, and executing them using system calls provided by the operating system. It's a fundamental component of Unix-like operating systems and is often used by developers and system administrators for tasks ranging from basic file manipulation to complex automation scripts.

Example code:
```
ls -la
```

Output:
```
$pwd
/simple_shell
$ echo "Welcome to Simple Shell!"
"Welcome to Simple Shell!"
$ echo "You can use normal commands."
"You can use normal commands."
$
```

## Project Requirements
+ Allowed editors: vi, vim, emacs
+ All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+ All your files should end with a new line
+ A README.md file, at the root of the folder of the project is mandatory
+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
+ Your shell should not have any memory leaks
+ No more than 5 functions per file
+ All your header files should be include guarded
+ Use system calls only when you need to
+ Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
+ The only difference is when you print an error, the name of the program must be equivalent to your argv[0]
	Example of error with sh:
```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
Same error with your program hsh:
```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
## Testing
Interactive mode
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

Non-Interactive mode
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## List of allowed functions and system calls+
+ all functions from string.h
+ access (man 2 access)
+ chdir (man 2 chdir)
+ close (man 2 close)
+ closedir (man 3 closedir)
+ execve (man 2 execve)
+ exit (man 3 exit)
+ _exit (man 2 _exit)
+ fflush (man 3 fflush)
+ fork (man 2 fork)
+ free (man 3 free)
+ getcwd (man 3 getcwd)
+ getline (man 3 getline)
+ getpid (man 2 getpid)
+ isatty (man 3 isatty)
+ kill (man 2 kill)
+ malloc (man 3 malloc)
+ open (man 2 open)
+ opendir (man 3 opendir)
+ perror (man 3 perror)
+ printf (man 3 printf)
+ fprintf (man 3 fprintf)
+ vfprintf (man 3 vfprintf)
+ sprintf (man 3 sprintf)
+ putchar (man 3 putchar)
+ read (man 2 read)
+ readdir (man 3 readdir)
+ signal (man 2 signal)
+ stat (__xstat) (man 2 stat)
+ lstat (__lxstat) (man 2 lstat)
+ fstat (__fxstat) (man 2 fstat)
+ strtok (man 3 strtok)
+ wait (man 2 wait)
+ waitpid (man 2 waitpid)
+ wait3 (man 2 wait3)
+ wait4 (man 2 wait4)
+ write (man 2 write)

## Citations And Sources
+ https://github.com/moby/moby/blob/master/AUTHORS
+ https://en.wikipedia.org/wiki/Unix_shell
+ https://en.wikipedia.org/wiki/Thompson_shell
+ https://en.wikipedia.org/wiki/Ken_Thompson
+ https://intranet.atlasschool.com/concepts/900
+ https://www.cs.cornell.edu/courses/cs414/2004su/homework/shell/shell.html 
