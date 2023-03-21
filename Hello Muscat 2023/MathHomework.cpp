/*
F. Math Homework
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Artem decided to solve his math homework. He has to solve at least n
 equations.

During the first day, he will solve v
 equations, during the second day — ⌊v2⌋
 equations, during the third day — ⌊v3⌋
, during the fourth day — ⌊v4⌋
, ..., during the k
-th day — ⌊vk⌋
.

The expression ⌊xy⌋
 means x
 divided by y
 rounded down (in other words, integer division).

It is obvious that the number of equations Artem will solve during the day v+1
 will become zero, and he will stop spending his time starting from this day.

Artem did not decide what is the number of equations v
 he will solve during the first day. But he doesn't want to get too tired, so he wants v
 to be the minimum possible (but sufficient to solve at least n
 equations).

Artem is too tired already and asks you to help him find the minimum such integer v
 that the total number of equations he will solve is at least n
.

Let n=13
. Then, if Artem will choose v=6
, the number of equations will be 6+⌊62⌋+⌊63⌋+⌊64⌋+⌊65⌋+⌊66⌋=6+3+2+1+1+1=14
. This number is not less than 13
 so this value of v
 satisfies Artem's requirements.

But if Artem will choose v=5
, the number of equations will be 5+⌊52⌋+⌊53⌋+⌊54⌋+⌊55⌋=5+2+1+1+1=10
. This number is less than 13
 so this value of v
 doesn't satisfy Artem's requirements.

Input
The only line of the input contains one integer n
 (1≤n≤106
) — the minimum number of equations Artem has to solve.

Output
Print one integer — the minimum value v
 that the total number of equations he will solve is at least n
.

Examples
inputCopy
1
outputCopy
1
inputCopy
13
outputCopy
6
inputCopy
1000000
outputCopy
86764

*/

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  int l=0, r=n+1;
  
  while (r-l >1){
      int m = (l+r)/2;
      int equations =0;
      for(int i=1;m/i>0;i++){
          equations +=m/i;
      }
      if(equations <n){
          l=m;
      }else{
          r=m;
      }
  }
  cout<< (l+1)<<endl;
  
}

/////////
//or 
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  int l=0, r=n;
  
  while (r-l >1){
      int m = (l+r)/2;
      int equations =0;
      for(int i=1;m/i>0;i++){
          equations +=m/i;
      }
      if(equations >= n){
          r=m;
      }else{
          l=m;
      }
  }
  cout<< r<<endl;
  
}