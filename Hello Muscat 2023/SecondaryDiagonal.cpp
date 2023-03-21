/*
H. Secondary Diagonal
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a n×n
 square table with positive numbers.

Print the sum of elements on the secondary diagonal.

For example, if the given table is


1 3 7 2
8 4 3 9
5 6 8 7
3 2 2 9
the answer is 2+3+6+3=14
.

Input
The first line contains a positive integer n
 (2≤n≤100
) — the size of the table.

The following n
 lines contain n
 positive numbers ai,j
 (1≤ai,j≤100
) — the elements of the table.

Output
Print a single number — the sum of elements on the secondary diagonal.

Examples
inputCopy
4
1 3 7 2
8 4 3 9
5 6 8 7
3 2 2 9
outputCopy
14
inputCopy
5
1 5 2 3 3
7 8 6 4 1
9 3 9 8 7
2 1 5 6 8
6 2 3 9 4
outputCopy
23


*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<vector<int>> a;
    
    int n;
    cin >> n ;
    
    a.resize(n, vector<int>(n));
    
   
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    
    int sum =0;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j == n-1){
                sum += a[i][j];
            }
            
        }
    }
    cout << sum << endl;
    return 0;
}