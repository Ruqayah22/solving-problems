/*
D. Rook Sum
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You're given a board a
 with n
 rows and m
 columns. Each cell of the board contains a number.

Also, there is a rook located in a cell with coordinates (x,y)
 (x
-th row and y
-th column). Rook moves any number of squares horizontally or vertically in one step.

Your task is to find the sum of numbers in all cells that rook can move to in one step.

Input
First line contains two integers n
 and m
 (1≤n,m≤100
).

The next n
 lines represent the matrix. Each of them contains m
 integers from 1
 to 10000
.

The last line contain two integers — x
 and y
 (1≤x≤n
, 1≤y≤m
) — the coordinates of the rook.

Output
In the first line print one number — the answer to the problem.

Examples
inputCopy
2 2
1 1
1 1
1 1
outputCopy
3
inputCopy
5 5
1 2 3 4 5
5 1 2 3 4
1 2 100 1 3
3 3 3 3 3
5 5 3 1 2
3 3
outputCopy
118
Note
In the first sample rook can move to 3
 cells with sum of numbers equal to 3
.

*/