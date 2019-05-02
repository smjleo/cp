# chemical-equations

### Problem Statement
Leo showed up to chemistry class today without studying, and because of this, he is underprepared for the surprise test; he doesn't know how to balance chemical equations!  
So he decided to ask you for help balancing.
The equations he are asking you to balance have `n` reactants and `m` products. Your job is to code a program to balance these equations for him.
If an equation is impossible to balance, output -1.

### Input Format
The first line of input will contain two integers, `n` and `m`.
The second line of input will contain the reactants, seperated by spaces. Elements are represented by an uppercase letter preceding optional lowercase letters, and there is an optional number after them telling how many elements are in the molecule. If there is no numbers after an element, then there is only 1 of it in the molecule.  
An example is `Na2O`, which can be split into 2 `Na` and 1 `O`.  
It is possible to have more than 1 lowercase letter in a element's symbol - `Csdakw` is a valid element name.

### Output Format
On the first line should be the number of each reactant, seperated by spaces.
On the second line should be the number of each product, seperated by spaces.
If the equation is impossible to balance, then the output should simply be `-1`.

### Sample Input #1
Input
```
2 1
H2 O2
H2O
```
### Sample Output #1
```
2 1
2
```
### Sample #2
Input
```
2 2
CO2 H2O
C6H12O6 O2
```
### Sample Output #2
```
6 6
1 6
```
### Sample Input #3
```
2 1
K2O OH
KOH
```
### Sample Output #3
```
-1
```
Explanation  
It is not possible to balance this equation.
