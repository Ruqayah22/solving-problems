#include <iostream>

using namespace std;

int main()
{
    
    int a,b,c;
    int high1;
    int high2;
    int maxSum;
    
    
    cin >> a >> b >> c ;

   if (a < b)
   {
        high1 = b;
        high2 = c;
        maxSum = b + c;
    }else if (b < a)
    {
        high1 = a;
        high2 = c;
        maxSum = a + c;
        
    }else if (c < a)
    {
        high1 = a;
        high2 = b;
        maxSum = a + b; 
    }
    cout << maxSum << endl;
    return 0;
}
