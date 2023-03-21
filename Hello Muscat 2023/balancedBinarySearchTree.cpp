/*
G. Balanced binary search tree
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
Implement a balanced binary search tree.

Input
The input contains several operations with the tree and their amount does not exceed 105
. Еvery line contains one of the following operations:

insert x
 — insert key x
 into the tree. If there is a key x
 in the tree already, do nothing;
delete x
 — remove key x
 from the tree. If there is no key x
 in the tree, do nothing;
exists x
 — if there is a key x
 in the tree, output "true", otherwise output "false";
next x
 — output the smallest key in the tree that is strictly larger than x
, or "none" if there's no such key;
prev x
 — output the largest key in the tree that is strictly less than x
, or "none" if there's no such key.
All keys are integers no greater than 109
 by absolute value.
Output
Output results of all operations exists, next, prev.

Example
input
insert 2
insert 5
insert 3
exists 2
exists 4
next 4
prev 4
delete 5
next 4
prev 4
output
true
false
5
3
none
3

*/


// my solve
#include <iostream>
#include <cstring>
#include <set>
#include <map>
using namespace std;

int main()
{
    
    set<int> Bs;
    
    string operations;
    int x;
    cin>> operations >> x;
    
    if(operations == "insert"){
        if(Bs.count(x)==0){
            Bs.insert(x);
        }
    }
    
    if(operations == "delete"){
        if(Bs.count(x)==0){
            Bs.erase(x);
        }
    } 
    
    if(operations == "exists"){
        if(Bs.count(x)==1){
            cout << "true" << endl;
        }else{
            cout << "false" << endl;
        }
    } 
    
    if(operations == "next"){
        if(Bs.count(x)==1){
            x++;
            cout<< x << endl;
        }else{
            cout<< "none" << endl;
        }
    } 
    
    if(operations == "prev"){
        if(Bs.count(x)==1){
            x--;
            cout<< x << endl;
        }else{
            cout<< "none" << endl;
        }
    } 
    
    return 0;
}