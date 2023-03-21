/*
F. Adjacent Sum
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a n×n
 square matrix a
 with positive numbers and a positive number k
.

You need to determine if there is a pair of adjacent (by side) elements that sums to k
.

Input
The first line contains a positive integer n
 (2≤n≤100
) — the size of the matrix.

The second line contains a positive integer k
 (1≤k≤20000
).

The following n
 lines contain n
 positive numbers ai,j
 (1≤ai,j≤10000
) — the elements of the matrix.

Output
Print 'YES' if there is a pair of adjacent (by side) elements that sums to k
 and print 'NO' otherwise.

Examples
inputCopy
4
13
1 4 8 2
3 9 7 3
2 3 1 9
5 8 3 1
outputCopy
YES
inputCopy
3
10
4 1 4
3 2 5
2 7 1
outputCopy
NO

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<vector<int>> a;
    
    int n,m, k ;
    cin >> n >> k;
    m=n;
    a.resize(n, vector<int>(m));
    
   
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i>0){
                if(a[i][j] + a[i-1][j] == k){
                    cout<< "YES" ;
                }
            }
            if(j>0){
               if(a[i][j] + a[i][j-1] ==k){
                    cout<< "YES" ;
                } 
            }
            if(i<n-1){
               if(a[i][j] + a[i+1][j] ==k){
                    cout<< "YES" ;
                } 
            }
            if(j<m-1){
               if(a[i][j] + a[i][j+1] == k){
                    cout<< "YES" ;
                } 
            }
            cout<< "No" ;
        }
        
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<vector<int>> a;
    
    int n,m, k ;
    cin >> n >> k;
    m=n;
    int sum =0;
    a.resize(n, vector<int>(m));
    
   
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(i>0){
                if(a[i][j] + a[i-1][j] == k){
                    cout<< "YES" ;
                    return 0;
                }
            }
            if(i<n-1){
               if(a[i][j] + a[i+1][j] ==k){
                    // sum += a[i+1][j];
                    cout<< "YES" ;
                    return 0;
                } 
            }
            
            if(j>0){
               if(a[i][j] + a[i][j-1] ==k){
                    cout<< "YES" ;
                    return 0;
                } 
            }
            
            if(j<m-1){
               if(a[i][j] + a[i][j+1] == k){
                    // sum += a[i][j+1];
                    cout<< "YES" ;
                    return 0;
                } 
            }
        }
        
    }
            cout<< "No" ;
    return 0;
}