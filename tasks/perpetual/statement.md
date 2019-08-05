# perpetual

### Problem Statement

Oh no! Leo's character has been caught in a perpetual!  
A perpetual is described by the following scenario:   
Leo's character is located in a 1 (height) * `n` (width) sequence of tiles. Each tile has a bomb on it that has a counter. If Leo moves onto that tile 3 times (not necessarily in succession), Leo gets blown up. Leo is located at the leftmost tile (which already has '1' on its counter), and on any turn, he can only go either left or right - he can't stay on his current tile.  
He knows he cannot get out of the perpetual unless he dies and loses. However, since this game is a timed game, if Leo can figure out the maximum number of turns he can take without dying, he might get the opponent to run out of turns, thus making Leo win the game - far better than instantly losing! 
However, Leo doesn't know what the maximum number of moves is. This is where he turns to you for help. Your job is to figure it out for him.

### Input Format
The first line will have one integer `n`, the width of the perpetual.

### Constraints
2 <= `n` <= 10^12

### Output Format
Output one integer, the maximum number of turns Leo can stay alive for.

### Subtasks
- **Subtask 1**: `n` <= 30 (5 points)
- **Subtask 2**: `n` <= 10^9 (15 points)
- **Subtask 3**: `n` <= 10^12 (80 points)

### Sample Input 1
```
2
```

### Sample Output 1
```
4
```

### Sample Explanation 1
The perpetual looks like this:
```
##########
# X ##   #
##########
```
(The X marks Leo's initial position.)  
Leo can only move right when he's on the left tile, and can only move left on the right tile.  
So, the counters increment like this:

```
Turn | L | R
0    | 1 | 0 (initial value)
1    | 1 | 1
2    | 2 | 1
3    | 2 | 2
4    | 3 | 2 (kaboom!)
```

The initial value was not considered one of Leo's turns. As such, 4 turns have taken place, and so the output is 4.

### Sample Input 2
```
3
```

### Sample Output 2
```
5
```

### Sample Explanation 2
Here is one way the counters could have incremented:

```
Turn | Pos | L | M | R
0    | L   | 1 | 0 | 0 (initial value)
1    | M   | 1 | 1 | 0
2    | R   | 1 | 1 | 1
3    | M   | 1 | 2 | 1
4    | L   | 2 | 2 | 1
5    | M   | 2 | 3 | 1 (kaboom!)
```
