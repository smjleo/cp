# dice 
### Problem Statement
Leo, being the avid D&D player he is, rolls dice all the time. In order to minmax at combat, he needs a quick and easy way of choosing between two different dice rolls. This is where he asks you for help.  
Your job is to determine the following:  
Leo rolls `n` `k`-sided dice (where `k`-sided means that it could get a result of anything from 1 to `k`), and then sums the dice rolls together. How many different ways can he get a result `r`?

### Input Format
The first line will contain three integers `n`, `k`, and `r`.

### Constraints
1 <= `n` <= 1000  
1 <= `k` <= 1000  
`k` <= r <= `n*k` 

### Output format
Output one integer, the number of ways he could roll the dice to get the result.

### Subtasks
* **Subtask 1**: n, k <= 9 (1 point)
* **Subtask 2**: n, k <= 100 (19 points)
* **Subtask 3**: No other constraints (80 points)

### Sample Input 1
```
2 3 3
```

### Sample Output 1
```
2
```
### Sample Explanation 1
If Leo rolled 2 3-sided dice, then the only results he could get that add up to 3 would be [1, 2] and [2, 1]. Therefore, the answer is 2.

### Sample Input 2
```
4 3 6
```

### Sample Output 2
```
10
```
### Sample Explanation 2
Leo could achieve 6 with 4 3-sided dice by rolling any of: [1, 1, 1, 3], [1, 1, 3, 1], [1, 3, 1, 1], [3, 1, 1, 1], [1, 1, 2, 2], [1, 2, 2, 1], [2, 2, 1, 1], [2, 1, 1, 2], [2, 1, 2, 1], and [1, 2, 1, 2]. Thus, the answer is 10.
