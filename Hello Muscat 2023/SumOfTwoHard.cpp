/*
C. Sum Of Two: Hard
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a list of n
 distinct integers a=[a0,a1,…,an−1]
 and an integer s
.

Let's consider all possible sums of any two distinct integers from the given list. Among all this sums you need to find the largest that is less or equal to s
.

Input
The first line contains a positive integer n
 (2≤n≤50000
) — the number of elements in the list.

The second line contains n
 space-separated distinct integers a0,a1,…,an−1
 (−109≤ai≤109
) — the elements of the list.

The third line contains an integer s
 (−2⋅109≤s≤2⋅109
).

Output
Print a single integer — the maximum number that is less or equal to s
 that you can achieve by summing up two distinct elements from the given list.

It is guaranteed that such number exists.

Examples
inputCopy
5
5 8 9 1 4
15
outputCopy
14
inputCopy
2
-10 -100
0
outputCopy
-110
inputCopy
2
1 2
4
outputCopy
3
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n ;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int s;
  cin >> s;
  
  sort(a.begin(), a.end());
  
// a[i] < a[j]
  int ans = -2000000000;

  for (int i = 0; i < n; i++) {
    //a[i] + a[j] <= s

    // binary search 
    int l = i, r = n; // search from i not from 0
    while (r - l > 1) {
      int m = (l + r) / 2;
      if (a[i]+ a[m] <= s) {
        l = m;
      } else {
        r = m;
      }
    }
    if(l==i){
        continue;
    }
    if(a[i]+a[l] > ans){
        ans = a[i]+a[l];
    } // ans= max(ans, a[i]+a[l]);
  }
    cout << ans << endl;
}