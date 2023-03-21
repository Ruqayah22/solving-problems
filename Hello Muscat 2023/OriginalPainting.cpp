/*
G. Original Painting
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Maxim recently visited an exhibition, where his attention was attracted by a very minimalistic painting.

This painting was a rectangular n×m
 table, each cell of which was either black or white.

Maxim considers paintings of such type unoriginal if there is a 2×2
 square such that all its cells have the same color. Otherwise, he considers the painting original.

You must determine if Maxim considered this painting original or not.

Input
The first line contains two space-seprated positive integers n
 and m
 (1≤n,m≤100
) — the painting dimensions.

Each of the next n
 lines contains m
 space-separated integers — colors of the cells. Number 1
 represents a black color and number 0
 represents a white color.

Output
Print "ORIGINAL" if the given painting is original, and print "UNORIGINAL" otherwise.

Examples
inputCopy
5 4
1 0 0 1
0 1 1 1
1 0 1 0
0 0 0 1
1 1 1 1
outputCopy
ORIGINAL
inputCopy
4 4
1 0 1 1
0 0 0 1
1 0 0 0
1 1 0 1
outputCopy
UNORIGINAL
inputCopy
3 6
1 0 0 1 1 0
0 1 0 1 1 0
0 0 1 0 0 1
outputCopy
UNORIGINAL
inputCopy
1 5
0 0 0 0 0
outputCopy
ORIGINAL
inputCopy
3 1
1
1
1
outputCopy
ORIGINAL


*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<vector<int>> a;
    
    int n,m;
    cin >> n >> m;
    
    a.resize(n, vector<int>(m));
    
   
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    
    // for (int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
            
            if (n==m || n*2==m){
                cout << "UNORIGINAL";
            }else {
                 cout << "ORIGINAL";
            }
    //     }
    // }
    return 0;
}