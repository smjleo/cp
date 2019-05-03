# dualgraph
### Problem Statement

In mathematical graph theory, there's a concept of a 'dual graph'. The idea is that every enclosed region of the graph turns into its own node, and its edges are determined by which regions share an edge.

Here's an example: ![Dual graph](https://upload.wikimedia.org/wikipedia/commons/b/ba/Duals_graphs.svg)

Note that everything 'outside' the graph is considered as one infinitely large region.

Your job is: given an arbitrary planar graph, find the "dual graph". This dual graph will always be unique (because the graph is planar). 

### Input Format
On the first line of input will be `n` and `e`, representing the number of nodes and the number of edges respectively.

On the next `n` lines of input will be 2 integers `a` and `b`, representing that node `a` is connected to node `b`. `a` and `b` are 0-indexed.

### Constraints
1 <= `n` <= 10^4

1 <= `e` <= 10^8

### Output Format
You should output the dual graph, formatted in an adjacency list form.


