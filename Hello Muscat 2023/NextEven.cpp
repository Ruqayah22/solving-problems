#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    
    int a;
    int n;
    
    cin >> a ;
    
    if (a%2 == 0)
    {
        n = a + 2;
    }else{
        n = a +1;
    }

    cout << n << endl;
    
    return 0;
}