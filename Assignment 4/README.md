To Run Code between the Preprocessor Directives write those as -D 
```
g++ -o sns sns.cpp -lpthread -D [Operative1] .... 
```

# Push-updates mechanism using threads.
A <code>push update</code> mechanism using multiple <code>threads</code> for a social media website, where updates from friends are received and sorted based on time or priority. The threads and their functionalities are specified.
- **Main thread :** loads a static graph of Github developers. Each node maintains a wall queue and a feed queue, with a variable indicating reading order, and creates <code>userSimulator</code>, <code>readPost</code>, and <code>pushUpdate</code> threads.
- **userSimulator :**  Generate actions for 100 random nodes in the graph and pushes them to the <code>wall queue</code> of the user node and a queue monitored by pushUpdate threads, based on a proportion of log2(degree(node)).
- **pushUpdate :** A set of 25 threads monitor a <code>shared queue</code> populated by userSimulator, and for each new action in the queue, a worker thread will push updates to all neighbors of the associated node by adding the element to their <code>feed queue</code>, using conditional variables to optimize monitoring.
- **readPost :** A set of 10 threads monitor the neighbors' feed queues, deque actions and print messages in either chronological or priority order depending on the node variable. The monitoring will use conditional variables to improve efficiency.

Note: To avoid race conditions, the use of locks is necessary, but using too many locks or a global lock will slow down the functionalities. So the design of locks and functionalities is carefully planned.
