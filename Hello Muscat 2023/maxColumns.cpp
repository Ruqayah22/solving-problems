/*
C. Max Columns
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a n×m
 rectangular table with positive numbers.

Print m
 numbers — the maximum numbers for each of m
 columns.

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
Print m
 space-separated integers — the maximum numbers for each of m
 columns.

Examples
inputCopy
4 5
7 4 3 2 6
1 8 6 1 5
9 1 9 4 3
2 3 5 6 7
outputCopy
9 8 9 6 7
inputCopy
4 3
1 9 4
7 3 6
2 7 2
4 1 8
outputCopy
7 9 8
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<vector<int>> a;
    
    int n,m;
    cin >> n >> m;
    a.resize(n, vector<int>(m));
    
    int maxNo;
    
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
        for(int j=0;j<m;j++){
            maxNo = a[0][j];
            for (int i=0;i<n;i++){
                     if(a[i][j]> maxNo){
                         maxNo = a[i][j];
                     }
                }
        cout << maxNo << ' ';
        }
    return 0;
}