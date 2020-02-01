# circus

### Problem Statement
Leo's friends are organising a circus for Leo, and have prepared a grand finale. The act is as follows:

1. There are `n` friends in a queue. This order must be kept as the limited space in the venue means that they don't have enough space to move around.
2. The first friend in the queue either exits the stage or moves to the centre of the stage.
3. If there is no one on the stage, go back to step 2. If not, next friend in the queue either exits the stage or climbs up to the shoulder of the friend on the stage.
4. The next friend in the queue either exits the stage or climbs up to the top of the "pile" of friends and stands up on their shoulders.
5. Step 4 repeats until there are no friends left in the queue.

However, there are two catches: first of all, for the next person in the queue to climb up to the "pile", the person at the very top **must** be shorter in height than the person about to climb up, as that makes it as easy as possible for the friend to climb and therefore makes it safer. The other catch is that the sum of the heights of all people on the "pile", `h`, must be no more than k.

Leo's friends wants to find the value of `h` where `h <= k` and there are the most amount of possibilities to reach `h`. Given the heights of all the friends in the order of the queue, output two integers: the height `h` with the most ways to reach and the number of ways to reach that height. If there are multiple values of `h`, output the higher one.

In other words, given an array, find the value `h` in which there is the most number of increasing subsequences with sum `h`. Output the value of `h` and the number of increasing subsequences with sum `h`. Output the highest possible value of `h` if there are multiple with the same number of increasing subsequences.

### Input format
[Input]

### Constraints
* 2 <= `n` <= 2000
* 0 <= `k` <= 10^18
* 0 <= `A[i]` <= 1000

### Output format
[Output]

### Subtasks
- **Subtask 1**: `k` = 0 (5 points)
- **Subtask 2**: `k` = 1 (3 points)
- **Subtask 3**: `n`, `k` <= 18 (10 points)
- **Subtask 4**: `k` <= 2000 (32 points)
- **Subtask 5**: No additional constraints. (50 points)

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
