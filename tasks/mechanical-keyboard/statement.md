# mechanical-keyboard

### Problem Statement
Leo is addicted to building and collecting [custom mechanical keyboards](https://www.reddit.com/r/mechanicalkeyboards). In fact, due to the sheer number of keyboards he now owns, he has run out of storage space in his room! When he visited a furniture store to get some shelves, he was overwhelmed by the large number of options. Not only that, but since mechanical keyboards can be (very) expensive, he has a limited amount of money left in his sad bank account. He needs your help to choose which shelves to buy, or more specifically, the maximum amount of mechanical keyboards he can store if he buys the optimal shelves within the price range.

Given the amount of money in his bank account, the price of the shelves and the amount of keyboards each of them can store, determine the maximum amount of keyboards he can store.      

### Input format
The first line of input will contain two space-separated integers, `n` and `m`, which are the number of shelves available in the store.
The next `n` lines will contain 2 space-separated integers, `A[i]` and `P[i]` respectively, where `A[i]` denotes the amount of keyboards the `i`-th shelf can store, and where `P[i]` denotes the price of the `i`-th shelf.

### Constraints
1 <= `n`, `m` <= 10000  
0 <= `A[i]`, `B[i]` <= 100000 for all `i`

### Output format
Output one integer, the maximum number of keyboards Leo can store.

### Subtasks
- **Subtask 1**: `n` = 2  (5 points)
- **Subtask 2**: `A[i]` = `A[j]` for all `i`, `j` (10 points)
- **Subtask 3**: `A[i] = B[i]` for all i (10 points)
- **Subtask 3**: 1 <= `n` <= 20  (10 points)
- **Subtask 4**: No additional constraints  (65 points) 

### Sample Input 1
```
5 5
20 1
20 3
30 3
40 4
50 5
```
### Sample Output 1
```
60
```

### Sample Explanation 1
Leo can buy the shelves with price 1 and price 4. The amount of keyboards he can store are 40 + 20 = 60. This is the optimal solution.

### Sample Input 2
```
1 5
10 10
```

### Sample Output 2
```
0
```
