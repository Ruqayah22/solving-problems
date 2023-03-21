/*
C. Intersection
time limit per test2 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
You have two sets A and B. You should intersect them. The intersection of set A and set B is such a set C that contains all number that belongs to both A and B, and it contains only them.

Input
The first line contains two integer numbers n and m — sizes of the two sets (1 ≤ n, m ≤ 100 000).

The following n lines contain one number each — the set A. All these numbers are distinct.

The following m lines contain one number each — the set B. All these numbers are distinct.

All numbers in both sets are between 0 and 109.

Output
In the first line output the size of the intersection of A and B.

In the second line output the intersection of A and B in increasing order.

In the following line output the number of the remaining elements in A (except the intersection).

In the following line output them in increasing order.

In the following line output the number of the remaining elements in B (except the intersection).

In the following line output them in increasing order.

Example
input
4 3
0
1
10
9
1
3
0
output
2
0 1 
2
9 10 
1
3 
*/

#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    set<int> A, B;
    
    for(int i=0 ; i< n; i++){
        int num;
        cin>>num;
        A.insert(num);
    }
    for(int i=0 ; i< m; i++){
        int num;
        cin>>num;
        B.insert(num);
    }
    
    set<int> c,d,e;
    
    for(int x: A){
        if(B.count(x)==1){
            c.insert(x);
        }else{
            d.insert(x);
        }
    }
    for (int x :B ){
        if(A.count(x)==1){
            c.insert(x);
        }else{
            e.insert(x);
        }
    }
    cout << c.size() << endl;
    for (auto& str : c) {
        cout << str << ' ' ;
    }
    cout << endl;
    cout << d.size() << endl;
    for (auto& str : d) {
        cout << str << ' ' ;
    }
    cout << endl;
    cout << e.size() << endl;
    for (auto& str : e) {
    cout << str << ' ' ;
    }
    cout << endl;
    
    return 0;
}
