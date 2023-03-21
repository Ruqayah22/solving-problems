/*
E. Fence Building
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Artem has to build a fence around his country house. He got n
 planks, the height of the i
-th plank is ai
.

Artem decided that he wants his fence to consist of at least k
 planks of the same height.

In order to achieve this, he can cut some planks by smaller planks (but note that he can not merge two small planks into the one).

Artem is a pretty private person, so he wants his fence to have the maximum possible height (and consist of at least k
 planks, of course).

Your task is to find the maximum possible height of the fence Artem can achieve. Note that the answer can be 0
 sometimes.

Consider an example: a=[5,2,3,7,9]
 and k=4
. Then the maximum height of the fence Artem can achieve is 4
: he cuts one plank of the height 4
 from the first plank (and the plank of the height 1
 remains unused). The second and the third planks remain unused. Then Artem cuts one more plank of the height 4
 from the fourth plank (and the plank of the height 3
 remains unused). And, finally, he cuts two planks of the height 4
 from the fifth plank (and the plank of the height 1
 remains unused).

Input
The first line of the input contains two integers n
 and k
 (1≤n,k≤105
) — the number of planks Artem got and the minimum number of planks in the fence, respectively.

The second line of the input contains n
 integers a1,a2,…,an
 (1≤ai≤109
), where ai
 is the height of the i
-th plank.

Output
Print one integer — the maximum possible height of the fence Artem can achieve. Note that the answer can be 0
 sometimes.

Examples
inputCopy
5 4
5 2 3 7 9
outputCopy
4
inputCopy
5 4
5 2 3 7 10
outputCopy
5
inputCopy
7 10
21 17 10 5 12 4 22
outputCopy
7

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
    // binary search 
    int l = 0, r = 1000000000 +1;

    while (r - l > 1) {
      int m = (l + r) / 2;
      int planks = 0;
      for(int x : a){
        planks += x / m;
      }
      if(planks >= k){
            l = m;
        }else{
            r = m;
        }
    }
      cout << l << endl;
}