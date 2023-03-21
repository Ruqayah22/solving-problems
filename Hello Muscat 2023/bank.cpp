/*
B. Bank
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Bank has some clients. Every client has exactly one account. Initially, all clients have 0 money in their accounts.

Write a program that will execute the following two requests:

Request of the form 1 name money, where name is a name of a client, and money is the amount of money that should be added to their account.
Request of the form 2 name. For this request, you should output the amount of money on account of that client. But if that client didn't appear in the requests of the first type before, you should output "ERROR" instead.
Input
The first line contains one integer number n — a number of requests (1 ≤ n ≤ 100 000). The following n lines contain requests description. Names of the clients consist of lowercase English letters and have lengths of no more than 20. The amount of money in the request of the first type doesn't exceed 10 000 by absolute value.

Output
For every request of the second type output amount of money in the client's account. Or ERROR.

Example
input
10
1 andrew 100
2 andrew
1 andrew -100
2 andrew
2 zhenya
1 anton -10000
1 anton -10000
2 anton
2 anton
1 alisa 10000
output
100
0
ERROR
-20000
-20000

*/

#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main()
{
    int n; 
    cin >> n; 
    
    map<string, int> Ba;
    
    for(int i=0 ; i<n; i++){
        int z;
        cin >> z;
        
        if(z==1){
            int money;
            string name;
            cin>> name >> money;
            if(Ba.count(name)==0){
                Ba.insert({name,0});
            }
            Ba[name] +=money;
        }else {
            string name ;
            cin>> name;
            if(Ba.count(name)==0){
                cout<< "ERROR" << endl;
            }else{
                cout << Ba[name] << endl;
            }
        }
        
    }
    
    return 0;
}