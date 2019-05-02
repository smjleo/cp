# bet

### Problem Statement
Leo is an avid risk-taker, and like most days, he has challenged Vir to a bet. Leo claims, given an array of integers `arr` and an integer `k`, that Vir wouldn't be able to select two numbers in unique positions from an array so that they add up to `k`. Leo wants you, an extremely intelligent bystander, to help him to determine whether or not he has won the bet or not. In other words, determine if there exists two integers, `arr[i]` and `arr[j]` where `i != j`, such that `arr[i] + arr[j] = k`.

### Input Format
The first line of input will consist of two space-separated integers, `n` and `m`.
The next line will consist of `n` space-separated integers, each integer representing the array.

### Constraints
0 <= `n` <= 10^9

### Output Format
If it is not possible for Vir to pick two integers from the array that adds up to k, output "EZ" (without quotes).
If it is possible, print "RUN AS FAST AS YOU CAN LEO" (without quotes).
