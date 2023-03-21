/*
C. Number of Grasshopper Paths
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There is a grass field consisting of n
 grass cells. Initially, a grasshopper is staying at the cell 1
. It can jump to the right by 1
, 2
, 3
, ..., k
 (i.e. it can jump to any cell to the right that is not further than k
 from the current cell).

Your task is to calculate the number of different paths from the cell 1
 to the cell n
.

Since the answer can be very large, print it modulo 109+7
 (1000000007
).

Input
The only line of the input contains two integers n
 and k
 (1≤k<n≤1000
) — the number of cells in the grass field and the maximum jump length, respectively.

Output
Print one integer — the number of different paths from the cell 1
 to the cell n
.

Since the answer can be very large, print it modulo 109+7
 (1000000007
).

Examples
inputCopy
5 2
outputCopy
5
inputCopy
1000 215
outputCopy
801061711
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    const int MOD = 1000000007;
    int n, k;
    cin>> n >> k;
    
    vector<int> dp(n);
    
    dp[0] = 1;
    
    for(int i=1; i<n; i++){
        for(int j=1; j<=k; j++){
            if(i-j >= 0){
                dp[i] += dp[i-j];
                dp[i] %= MOD;
            }
        }
    }
    
    cout << dp[n-1] << endl;
    return 0;
}