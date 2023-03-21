/*
J. Mishka and Contest
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Mishka started participating in a programming contest. There are n
 problems in the contest. Mishka's problem-solving skill is equal to k
.

Mishka arranges all problems from the contest into a list. Because of his weird principles, Mishka only solves problems from one of the ends of the list. Every time, he chooses which end (left or right) he will solve the next problem from. Thus, each problem Mishka solves is either the leftmost or the rightmost problem in the list.

Mishka cannot solve a problem with difficulty greater than k
. When Mishka solves the problem, it disappears from the list, so the length of the list decreases by 1
. Mishka stops when he is unable to solve any problem from any end of the list.

How many problems can Mishka solve?

Input
The first line of input contains two integers n
 and k
 (1≤n,k≤100
) — the number of problems in the contest and Mishka's problem-solving skill.

The second line of input contains n
 integers a1,a2,…,an
 (1≤ai≤100
), where ai
 is the difficulty of the i
-th problem. The problems are given in order from the leftmost to the rightmost in the list.

Output
Print one integer — the maximum number of problems Mishka can solve.

Examples
inputCopy
8 4
4 2 3 1 5 1 6 4
outputCopy
5
inputCopy
5 2
3 1 2 1 3
outputCopy
0
inputCopy
5 100
12 34 55 43 21
outputCopy
5
Note
In the first example, Mishka can solve problems in the following order: [4,2,3,1,5,1,6,4]→[2,3,1,5,1,6,4]→[2,3,1,5,1,6]→[3,1,5,1,6]→[1,5,1,6]→[5,1,6]
, so the number of solved problems will be equal to 5
.

In the second example, Mishka can't solve any problem because the difficulties of problems from both ends are greater than k
.

In the third example, Mishka's solving skill is so amazing that he can solve all the problems.
*/

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    
    
    int n , k;
    cin>> n >> k ;
    int sum =0;
    
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
      auto it = a.begin();
      auto il = a.end(); 
      
    for (int i = 0; i < n -1; i++) {

        if (a[i] == *it && a[i] <= k ) {
            
           sum +=1;
           
        }else if(a[i] == *il && a[i] <= k){
            sum +=1;
        }
 
    }
    cout << sum << endl;
    return 0;
}