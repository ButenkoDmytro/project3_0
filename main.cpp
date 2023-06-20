#include <iostream>  
using namespace std;  
  
int main()  
{  
   for (int x = 0; x <= 10; x++)  
   {  
    if (x > 0 && x < 10)  
    {  
        for (int i = 0; i <= 10; i++)  
            cout << x << " x " << i << " = " << x * i << endl;  
    }  
   }  
    return 0;  
}
