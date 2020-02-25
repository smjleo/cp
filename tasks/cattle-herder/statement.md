# Cattle Herder

### Problem Statement
Farmer Lucas has many duties throughout the day, one of which is cattle herding. Every so often, Farmer Lucas needs to group his cows together into a herd and guide them to another location. Further, the cows have a tendency to be hungry all the time, as a result, all visible grass must be travelled towards and eaten. However, Farmer Lucas dreads herding the cattle as he tends to get tired very easily so he would like to take the shortest route in any situation. On top of this, Farmer Lucas would like to avoid any ditches as that could cause harm to his cows which is unfavourable.

The farm is represented as a grid of `H`x`W` squares with `H` horizontal rows and `W` vertical columns. The square at the `i`th row from the top and the `j`th column is the following:
  * If it is '#' it is a "ditch"
  * If it is '.' it is a "road"
  * If it is 'G' it is a "grass"
  
From a road or grass square, Farmer Lucas can only move towards a horizontally or vertically adjacent road or grass square. Ditch squares are impassable. Farmer Lucas starts in a given position and wants to end up in a given position.

For this situation, find the least amount of moves needed to go over all the grass and afterwards, reaching the end point.

### Input format
Your program must read from standard input. The first line contains 6 integers, `H`, `W`.

On the 2nd to `(H + 1)`th lines: the `(i + 1)`th line contains `W` space-seperated characters, representing either a ditch ('#'), road ('.') or grass ('G') square. 

The `(H + 2)`th line contains two integers `SX`, `SY`, representing the coordinate of the start position.

The `(H + 3)`th line contains two integers `EX`, `EY`, representing the coordinate of the end position.


### Constraints
[Const]

### Output format
Your program must output one line with a single integer to the standard output, which is the minimum number of moves needed to go over all the grass squares, and afterwards, reaching the end point. 

### Subtasks
- **Subtask 1**: [st1]
- **Subtask 2**: [st2]
- **Subtask 3**: [st3]
...

### Sample Input 1
[Input1]

### Sample Output 1
[Output1]

### Sample Explanation 1
[Exp1]

### Sample Input 2
[Input2]

### Sample Output 2
[Output2]

...
