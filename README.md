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
There will be _1 producer_ process updating a Facebook friend circle network and _10 consumer_ (worker) processes calculating shortest paths between people, using <code>shared memory</code> to communicate between processes.
- **Main Process** : Load a <code>dynamic graph</code> into a shared memory. Spawn the producer & consumer processes
- **Producer process** : updates the graph every 50 seconds by randomly adding m new nodes (10-30) that connect to k existing nodes (1-20) with probability proportional to the degree of the existing nodes.
- **Consumer process** : wake up every 30 seconds, count the nodes, and run _Dijkstra’s shortest path algorithm_ on a designated set of nodes (1/10 of all nodes) in the graph to find the shortest path from each source node to all reachable nodes, and append them to a specific file.
- **Optimization** : strategy to re-compute shortest paths when the producer adds a limited number of nodes/edges using a <code>"-optimize"</code> flag, and write a report with the strategy.

Note: Ignore race conditions for now as they will be addressed in the next assignment.

## Assignment 4 : Push-updates mechanism using threads.
A <code>push update</code> mechanism using multiple <code>threads</code> for a social media website, where updates from friends are received and sorted based on time or priority. The threads and their functionalities are specified.
- **Main thread :** loads a static graph of Github developers. Each node maintains a wall queue and a feed queue, with a variable indicating reading order, and creates <code>userSimulator</code>, <code>readPost</code>, and <code>pushUpdate</code> threads.
- **userSimulator :**  Generate actions for 100 random nodes in the graph and pushes them to the <code>wall queue</code> of the user node and a queue monitored by pushUpdate threads, based on a proportion of log2(degree(node)).
- **pushUpdate :** A set of 25 threads monitor a shared queue populated by userSimulator, and for each new action in the queue, a worker thread will push updates to all neighbors of the associated node by adding the element to their feed queue, using conditional variables to optimize monitoring.
- **readPost :** A set of 10 threads monitor the neighbors' feed queues, deque actions and print messages in either chronological or priority order depending on the node variable. The monitoring will use conditional variables to improve efficiency.

Note: To avoid race conditions, the use of locks is necessary, but using too many locks or a global lock will slow down the functionalities. So the design of locks and functionalities is carefully planned.


## Assignment 1 : shell scripting and shell commands
- **Question 1:** A <code>iterative TCP server</code> to allow client programs to get the system date and time from the server. The client displays the date and time on the screen, and terminates.
- **Question 2:** Write a simple TCP iterative server and client to evaluate arithmetic expressions

## Assignment 6 : Virtual memory management
It aims to implement a basic memory management module that customizes <code>memory allocation and deallocation</code> for large-scale real-world systems. Such systems often have their memory management modules and do not rely on the OS for memory management. Here, we created our memory management library — a header file <code>“goodmalloc.h”</code> and an implementation file <code>“goodmalloc.c”</code> with following functionalities:

- **createMem :** creates a _memory segment_, which is used at the beginning to allocate space for the code written using this library. It returns a big array of memory blocks.
- **createList :** creates a linked list of elements in the memory created by createMem() using local addresses, which are converted to suitable addresses for data access; the memory allocation uses _First Fit_ or _Best Fit_ and local variables are freed up before returning from a function using a global stack for bookkeeping.
- **assignVal :** updates a specified range of elements in a locally managed linked list with an array of values and returns an error if the size of the array doesn't match the number of elements to be updated.
- **freeElem :** free the memory of local variables, should be called before returning or explicitly, and raises an error if an invalid local address is provided.

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

