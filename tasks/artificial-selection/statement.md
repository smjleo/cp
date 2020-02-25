# Artificial Selection

### Problem Statement
Farmer Lucas owns `N` Belgian Blue cows. Belgian Blue cows are special as they have a mutation in the myostatin gene. Usually, the myostatin gene is able to stop muscle growth, however, the myostatin gene in this cow lacks the ability to function properly. This leads to the cows being able to grow muscle at an accelerated rate. As a result, these cows have more lean meat which, as Farmer Lucas has observed, sells better in the food marketplace.

To help with Farmer Lucas' endeavours, the government has subsidised his farm which allows him to purchase a Belgian Blue cow muscle reader. This revolutionary technology allows farmers like Lucas to quantify the amount of muscle a Belgian Blue cow has. On top of this, Farmer Lucas has also observed that only Belgian Blue cows with a muscle value strictly more than `K` sell well. Therefore, Farmer Lucas wants to take these muscular cows and breed them together so that the future offspring will inherit large muscles as well. 

Given `N` muscle values of Farmer Lucas' `N` cows and the minimum viable muscle value `K`, find how many cows Farmer Lucas should breed.

### Input format
Your program must read from standard input. The first line contains 2 integers, `N` and `K`. Then, it follows by `N` lines. the `i`th line represents the muscle value of the `i`th cow.

### Constraints
Time Limit: 2 seconds
`1 <= N <= 10^7`

### Output format
Your program must output one line with a single integer to the standard output, which is the number of cows which sell well.

### Subtasks
Your program will be tested on input instances that satisfy the following restrictions:
- **Subtask 1**: `1 <= N <= 100` and `K = N` (20 points)
- **Subtask 2**: `1 <= N <= 10^3` and `0 <= K <= N` (30 points)
- **Subtask 3**: `1 <= N <= 10^7` and `0 <= K <= N` (50 points)

### Sample Input 1
```
8 4
1
2
3
4
5
6
7
8
```

### Sample Output 1
```
4
```

### Sample Explanation 1
The cows with muscle values of 5, 6, 7, and 8 will sell well. Therefore, Farmer Lucas should breed these cows which means he needs to breed 4 cows.

### Sample Input 2
```
1 2
1000
```

### Sample Output 2

```
1
```
