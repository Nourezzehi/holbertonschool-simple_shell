How to use the Simple Shell:
You must first compile all the .c files in the repository to produce an executable using this code:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
Then run the executable (shown on the first line of the example) to get into the custom shell:
$./hsh

 How our simple shell works :
It consists of a an infinite loop that is only interrupted by reaching End of File (EOF) or pressing exit . it follows the following steps :

Reads the command(s) from the standard Input.
Parses the command(s).
Executes the command (s) which takes few other important steps:
search the command in the environment.
search for the path.
create the child process to execute the command.
Free the allocated memory && the command output.
Go back to the begining of the infinite loop and print a prompt .

($) ls
Hello_World.c README.md simple_shell.h hsh etc...
($) 
($) echo chicken nuggets
chicken nuggets
($) 

📑 Files Architecture:
-  main.h : Header file containing all functions prototypes and included header files. 
-  mainshell.c : contains the function calls contributing the shell work. 
-  get_the_line.c : gets the user input from the standard input.
-  parse_the_line.c : takes the line of command and divides it.
- env.c : gets and prints the environment.
-  shell.c : contains the checks before executing the main program.
- AUTHORS : file containing authors' names and their github usernames.

Allowed Functions List:
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fflush (man 3 fflush)
fork (man 2 fork)
free (man 3 free)
getcwd (man 3 getcwd)
getline (man 3 getline)
getpid (man 2 getpid)
isatty (man 3 isatty)
kill (man 2 kill)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (__xstat)(man 2 stat)
lstat (__lxstat)(man 2 lstat)
fstat (__fxstat)(man 2 fstat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)

End of README.md
