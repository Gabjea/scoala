#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   float f,x;
   cout << "x= "; cin >> x;
   if(x<=-3) {
     f = x*x+1;
   } else {
     if (x<3) {
        f = x-2;
     } else {
        f = x*x-4*x+5;
     }

   }
   cout << "f= " << f;
    return 0;
}
