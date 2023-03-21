/*
B. Nearest Element
time limit per test5 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an array a
 consisting of n
 integers.

You are also given q
 queries. The i
-th query is the number xi
. The answer on the i
-th query is such an element aj
 of the array a
 that is the absolute difference between xi
 and aj
 is the minimum possible (in other words, aj
 is the nearest to xi
 element of the array a
). If there are several such elements, the smaller one is chosen.

For example, if a=[1,7,5,3,2]
 then the nearest element to 5
 is a3=5
, the nearest element to 6
 is also a3=5
 and the nearest element to 4
 is a4=3
.

Your task is to answer these q
 queries.

Use binary search algorithm to solve this problem. We will look at your code and if it uses some other algorithm it will be rejected.

Input
The first line of the input contains two integers n
 and q
 (1≤n,q≤105
) — the length of a
 and the number of queries, respectively.

The second line of the input contains n
 integers a1,a2,…,an
 (1≤ai≤109
), where ai
 is the i
-th element of a
.

The next q
 lines describe queries. The i
-th line contains a single integer xi
 (1≤xi≤109
).

Output
Print q
 lines. In the i
-th line print one integer aj
 — such an element of the array a
 that is the absolute difference between xi
 and aj
 is the minimum possible (in other words, aj
 is the nearest to xi
 element of the array a
). If there are several such elements, the smaller one is chosen.

Example
inputCopy
9 7
2 4 5 2 3 6 4 2 10
2
4
7
10
11
3
2
outputCopy
2
4
6
10
10
3
2

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  sort(a.begin(), a.end());
  
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;

    int l = -1, r = n;
    while (r - l > 1) {
      int m = (l + r) / 2;
      if (a[m] < x) {
        l = m;
      } else {
        r = m;
      }
    }
    if (l == -1 ) {
        cout << a[l+1] << endl; // or a[0]
        continue;
    } 
    if(l == n-1){
        cout << a[l] << endl; 
        continue;
    }
    if(x-a[l] <= a[l+1]-x){
        cout << a[l] << endl; 
        
    }else{
        cout << a[l+1] << endl; 
        
    }
  }
}