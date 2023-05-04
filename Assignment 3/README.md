# Hands-on experience of using shared-memory

To run the file:
```
g++ -o main main.cpp -D DEBUG
./main
```
There will be _1 producer_ process updating a Facebook friend circle network and _10 consumer_ (worker) processes calculating shortest paths between people, using <code>shared memory</code> to communicate between processes.
- **Main Process** : Load a <code>dynamic graph</code> into a shared memory. Spawn the producer & consumer processes
- **Producer process** : updates the graph every 50 seconds by randomly adding m new nodes (10-30) that connect to k existing nodes (1-20) with probability proportional to the degree of the existing nodes.
- **Consumer process** : wake up every 30 seconds, count the nodes, and run _Dijkstra’s shortest path algorithm_ on a designated set of nodes (1/10 of all nodes) in the graph to find the shortest path from each source node to all reachable nodes, and append them to a specific file.
- **Optimization** : strategy to re-compute shortest paths when the producer adds a limited number of nodes/edges using a <code>"-optimize"</code> flag, and write a report with the strategy.

Note: Ignore race conditions for now as they will be addressed in the next assignment.
