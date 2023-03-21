/*
A. Corner Elements
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a n×m
 rectangular table with positive numbers.

Print the sum of the corner elements of the given table.

Input
The first line contains two positive integers n
 and m
 (2≤n,m≤100
) — the number of rows and the number of columns respectively.

The following n
 lines contain m
 positive numbers ai,j
 (1≤ai,j≤100
) — the elements of the table.

Output
Print a single number — the sum of corner elements.

Example
input
4 5
7 4 3 2 6
1 8 6 1 5
9 1 9 4 8
2 3 5 6 8
output
23

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<vector<int>> a;
    
    int n,m;
    cin >> n >> m;
    a.resize(n, vector<int>(m));
    
    int sum = 0;
    
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0){
                sum += a[i][j];
            }
            if(i==0 && j== m-1){
                sum += a[i][j];
            }
            if(i==n-1 && j==0){
                sum += a[i][j];
            }
            if(i==n-1 && j==m-1){
                sum += a[i][j];
            }
        }
    }
    cout << sum << endl;
    // sum = a[0][0] + a[0][m-1] +a[n-1][0] +a[n-1][m-1];
    

    return 0;
}