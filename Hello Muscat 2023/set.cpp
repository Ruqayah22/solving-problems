/*
A. Set
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Implement a set data structure.

Input
The first line contains a single integer number n — a number of requests (1 ≤ n ≤ 200 000).

The following n lines contain requests description. Each request can be of one of the following forms:

Request of the form + x means that you should add x to the set if it doesn't contain this number.
Request of the form - x means that you should delete x from the set if it contains this number.
Request of the form ? x means that you should output if the set contains x.
Values of all numbers don't exceed 109 by absolute value.

Output
For every request of the third type, output 1 if the set contains the number and 0 otherwise.

Example
input
7
+ 7
? 7
- 7
? 7
? 10
- 10
? 10
output
1
0
0
0
*/

#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    set<int> l;
    
    for(int i=0;i<n;i++){
        string s;
        int x;
        cin >> s >> x;
        
        if(s=="+"){
            l.insert(x);
        }else if (s == "-"){
            l.erase(x);
        }else{
            if(l.count(x)==1){
               cout << "1" <<endl;
            }else{
                cout<< "0" << endl;
            }
        }
    }
    return 0;
}