/*
B. Maximum
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a n×m
 rectangular table with distinct positive numbers.

Print the indices of the maximum element.

Input
The first line contains two positive integers n
 and m
 (2≤n,m≤100
) — the number of rows and the number of columns respectively.

The following n
 lines contain m
 positive numbers ai,j
 (1≤ai,j≤109
) — the elements of the table.

All elements of the given table are distinct.

Output
In the first line print a single integer x
 (0≤x≤n−1
) — the row in which the maximum is located.

In the second line print a single integer y
 (0≤y≤m−1
) — the column in which the maximum is located.

Examples
inputCopy
4 5
1 2 3 4 5
11 12 13 14 15
20 19 18 17 16
6 7 8 9 10
outputCopy
2
0
inputCopy
6 3
1 13 12
2 15 11
3 17 10
4 18 9
5 16 8
6 14 7
outputCopy
3
1
*/
/// print the max number 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<vector<int>> a;
    
    int n,m;
    cin >> n >> m;
    a.resize(n, vector<int>(m));
    
    int maxNo = 0;
    
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(a[i][j] > maxNo){
               maxNo = a[i][j];
           }
        }
    }
    cout << maxNo << endl;
    
    return 0;
}

///
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<vector<int>> a;
    
    int n,m;
    cin >> n >> m;
    a.resize(n, vector<int>(m));
    
    int maxNo = 0;
    
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(a[i][j] > maxNo){
               maxNo = a[i][j];
           }
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(a[i][j] == maxNo){
               cout << i << endl << j << endl;
               return 0;
           }
        }
    }
    
    
    
    return 0;
}