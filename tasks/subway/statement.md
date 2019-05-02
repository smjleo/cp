# subway

### Problem Statement
Leo is an aspiring city planner, wanting to build a metropolis. A backbone of a good city is good public transport (ahem American cities), and therefore Leo wants to build a new subway line. He has already planned everything, and the new line has already started its construction, but in random order. Unfortunately for him, he accidentally ate his plans, and now he has no idea how many connections he has to make to make all of the stations reachable from one another. Given the number of stations `n` (where the station numbers are 0, 1, 2, ..., `n`-2, `n`-1) and all of the connections that have finished construction, determine the minimum amount of connections needed to finish constructing the subway line.

### Input Format
The first line will consist of two space-separated integers, `n` and `m`, where `n` is the amount of stations and `m` is the amount of connections that have finished construction. The next `m` lines will consist of two space-separated integers, `A[i]` and `B[i]`, where stations `A[i]` and `B[i]` are connected already. Please note that there may be duplicate `A[i]` and `B[i]`s.

### Constraints
1 <= `n`, `m` <= 1000000  
0 <= `A[i]`, `B[i]` < `n`

### Output Format
Output one integer, the minimum amount of connections needed so that every station is reachable from one another.

### Sample Input 1
```
5 3
1 2
2 3
3 4
```

### Sample Output 1
```
1
```

### Sample Explanation 1
Stations 1, 2, 3, 4 are all accessible from one another, but station 0 is not reachable. We can connect station 0 to any of the first four stations, and they will all be connected.
