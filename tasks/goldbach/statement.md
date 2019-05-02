# goldbach

### Problem Statement
The Goldbach Conjecture is an open problem in mathematics. The conjecture goes as follows:

All even integers can be expressed as the sum of two primes. e.g. 40 = 17 + 23.

In order to help prove this statement, an algorithm needs to be made that can check any `n` to see if that `n` follows the Goldbach conjecture (to make sure it actually works for small `n` before effort should be invested into a proof.) You are assigned the job to do this.

Given `t`, the number of testcases, and `n[0]...n[t-1]`, where `n[i]` is a positive even integer, find the two primes that sum up to `n[i]` (as the Goldbach conjecture proves). Since multiple pairs of primes may add up to the same number, find the pair with the smallest difference; i.e. `|p - q|` where `p` and `q` are the primes should be minimized.

### Input Format
The first line of input will contain one integer, `t`, the number of testcases.
The next `t` lines of integers will contain an integer `n[i]`, giving the number for that testcase.

### Constraints
1 <= `t` <= 10^6

2 <= `n[i]` <= 10^18

`n[i]` is guaranteed to be even

### Output Format 
Output 2 integers on `t` lines, where the `i`-th line contains two primes `p` and `q` that add up to `n[i]` and minimize `|p - q|`.

### Subtasks
* **Subtask 1**: `t` = 2 (5 points)
* **Subtask 2**: `n[i]` <= 10^9 (5 points)
* **Subtask 3**: No additional constraints (90 points)

### Sample Input 1
```
1
40
```

### Sample Output 1
```
17 23
```

### Sample Explanation 1
`17 + 23 = 40`
