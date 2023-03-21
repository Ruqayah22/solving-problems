/*
D. Path in the Table
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There is a table of size n×m
. There is ai,j
 coins in the cell (i,j)
 of this table. You start in the cell (1,1)
 and want to reach the cell (n,m)
. You can only go right (from the cell (i,j)
 to the cell (i,j+1)
) or down (from the cell (i,j)
 to the cell (i+1,j)
). Note that you cannot move right from the column m
 or go down from the row n
 (i.e. you cannot move outside the table).

Your task is to calculate the maximum number of coins you can get among all possible paths from (1,1)
 to (n,m)
.

Input
The first line of the input contains two integers n
 and m
 (1≤n,m≤500
) — the number of rows and the number of columns, respectively.

The next n
 lines contain m
 integers each. The j
-th number in the i
-th line is ai,j
 (−106≤ai,j≤106
) — the number of coins in the cell (i,j)
.

Output
Print one integer — the maximum number of coins you can get among all possible paths from (1,1)
 to (n,m)
.

Examples
inputCopy
3 3
2 4 9
1 3 2
11 3 1
outputCopy
18
inputCopy
4 4
8 5 -3 -10
3 -9 -8 -10
2 -1 -3 -8
-3 1 9 3
outputCopy
25
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    const int MOD = 1000000007;
    int n, m;
    cin>> n >> m;
    
    vector<vector<int>> coins(n, vector<int>(m));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> coins[i][j];
        }
    }
    
    vector<vector<int>> dp(n, vector<int>(m));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(i == 0 && j==0){
               dp[i][j] = coins[i][j];
           }else if(i==0){
               dp[i][j] =dp[i][j-1] + coins[i][j];
           }else if(j==0){
               dp[i][j] =dp[i-1][j] + coins[i][j];
           }else{
               dp[i][j] = max(dp[i-1][j],dp[i][j-1] + coins[i][j]) ;
           }
        }
    }

    cout << dp[n-1][m-1] << endl;
    return 0;
}