# sum-ex

### Problem Statement
Adding numbers is fun, but adding too many numbers is not fun. Unfortunately, you are tasked with adding too many numbers.

Given two non-negative integers `a` and `b` where `a` is not larger than `b`, determine the value of `a + a+1 + a+2 + ... + b-2 + b-1 + b`, or more formally, the sum of all integers between `a` and `b`, inclusive.

### Input Format
The first line of input will contain one integer, `t`, the number of testcases.
The next `t` lines will contain two space-separated integers, `a` and `b`.

### Constraints
1 <= `t` <= 10^8

0 <= `a` <= `b` <= 10^9

### Output Format 
Output `t` lines. Each line should contain one integer, stating the computed value.

### Subtasks
* **Subtask 1**: `t` = 5 (5 points)
* **Subtask 2**: `t` <= 10^6; `a`, `b` <= 10^2 (12 points)
* **Subtask 3**: No additional constraints (83 points)

### Sample Input 1
```
3
5 10
5 18
1 129159
```

### Sample Output 1
```
45
161
8341088220
```
 
