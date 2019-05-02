# syncing-speeds

### Problem Statement
Leo is doing an ABC run of Super Mario 64, and he has laid out his route. His route is made up of slopes, and to progress from one slope to the next, he needs to hit that slope's "syncing speed" at which the next slope is reachable. The exact speed value does not need to be the same as the syncing speed; the speed value can be any integer multiple of the syncing speed, and he will still be able to progress to the next slope.  
At the start of his route, he starts off with a speed value. From there, he can only decrease his speed.  
He wants to know what the minimum possible speed to start off with is, so that he doesn't have to build up speed for 12 hours before proceeding with his run.
Your job is to figure out what that speed is.

### Input Format
On the first line of input, you are given `n` - the number of slopes in the route.
The next line of input contains `n` integers `S[0]...S[n-1]`, where `S[i]` represents the syncing speed of the `i`-th slope.

### Output Format
One integer, describing the speed to start with on the first slope.

### Constraints
1 <= `n` <= 10^8 
1 <= `S[i]` <= 10^9

### Subtasks
- **Subtask 1**: `S[0] = 1` (5 points)
- **Subtask 2**: `S[i] = S[j]` for all `i`, `j` (5 points)
- **Subtask 3**: 1 <= `n` <= 100 (10 points)
- **Subtask 4**: No additional constraints (80 points)

### Sample Input #1
```
3
1 3 2
```
### Sample Output #1
```
3
```
### Sample Explanation #1
3 is the 3rd multiple of 1, meaning that he can progress to the next slope, and the rest of the route progresses naturally from there. The finished route is `3 3 2`.
### Sample Input #2
```
5
3 5 6 2 1
```
### Sample Output #2
```
12
```
### Sample Explanation #2
12 is the 4th multiple of 3, meaning that he can progress to the next slope. Leo then lowers his speed to 10 (10 being the 2nd multiple of 5 allows him to progress) and the rest of the route progresses naturally from there. The finished route is `12 10 6 2 1`.
