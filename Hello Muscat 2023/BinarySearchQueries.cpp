/*
A. Binary Search Queries
time limit per test4 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given the array a
 consisting of n
 integers.

You are also given q
 queries. The i
-th query is the number xi
. The answer on the i
-th query is "YES" if the number xi
 belongs to the array a
 (in other words, if a
 has at least one element xi
) and "NO" otherwise.

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
-th line print "YES" if xi
 belongs to the array a
 and "NO" otherwise.

Example
inputCopy
6 6
1 2 10 7 2 4
2
8
1000000000
1
4
1
outputCopy
YES
NO
NO
YES
YES
YES


*/

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
    if (l + 1 < n && a[l + 1] == x) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}