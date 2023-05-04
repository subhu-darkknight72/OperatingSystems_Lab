# Operating-Systems_Labortary-2023
Assignments for the OS Lab Course Offered in the Spring Semester of 2023.

## Contributors
- 20CS10064: Subhajyoti Halder
- 20CS30023: Hardik Pravin Soni
- 20CS30059: Yatharth Sameer
- 20CS10086: Archit Mangrulkar

## Assignment 1 : Shell scripting and shell commands
Programs in shell script under the Linux env. that would run in bash terminal and perform the following Tasks
- <code>Computation - Finding LCM</code> : reverses all the numbers and outputs their LCM.
- <code>Pattern Matching - Username Validation</code> : checks if the usernames in file are valid or not.
- <code>File Handling - JSON Parsing</code> : convert each JSONL file into a CSV file, and extract given attributes.
- <code>File Manipulation - Argument Handling</code> : converting a line to alternating case without loops.
- <code>Pattern matching</code> : input to the folder and iterate through all the python files in the directory and subdirectories and print the file name, the path and all the comments in the file with their line numbers.
- <code>Loops/Arrays</code> - Sieve of Eratosthenes : finds out all the prime divisors of “n” using SoE only once.
- <code>File Handling - Sorting</code> :  gather names (across all files) beginning with the same letter in a single file
- <code>CSV File Manipulation</code> : track expenses by adding, sorting and displaying records in a csv file with columns for date, category, amount, and name. And also provide options to view total expenses.
- <code>Data Analysis</code> : takes text file input, and outputs the count of majors in descending order, names of students with 2 or more majors alphabetically, and number of students with a single major.

## Assignment 2 : Use of syscall
A shell as an application program on top of the Linux kernel. It accepts user commands and execute them. 
- Run external commands with input/output redirection, 
- Run external commands in the background, 
- Run several external commands in pipe mode, 
- Interrupt commands running in the shell using the signal call, 
- Move a command in execution to the background, 
- Change the current working directory of the shell, 
- Print the name of the working directory, 
- Handle wildcards in commands

Additionally, the shell searches through history using up/down arrow keys, and detects simple malwares.

## Assignment 3 : Hands-on experience of using shared-memory
There will be 1 producer process updating a Facebook friend circle network and 10 consumer (worker) processes calculating shortest paths between people, using <code>shared memory</code> to communicate between processes.
- Main Process: Loads a dynamic graph into a shared memory, and spawns the producer and consumer processes
- 

## Assignment 1 : shell scripting and shell commands
- **Question 1:** A <code>iterative TCP server</code> to allow client programs to get the system date and time from the server. The client displays the date and time on the screen, and terminates.
- **Question 2:** Write a simple TCP iterative server and client to evaluate arithmetic expressions

<!-- .
## Instruction
- **Create virtual environment**
```bash
sudo pip install virtualenv      # This may already be installed
virtualenv .env                  # Create a virtual environment
```
- **Run** start.sh **bash To Start Web Application**
```bash
./start.sh                       # All neccessary library will be downloaded
```
- **Open http://127.0.0.1:8000 in  your browser**
. -->

