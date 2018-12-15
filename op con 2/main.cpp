#include <iostream>

using namespace std;

int main()
{
     float x, f;
     cin >> x;
     f =(x > 0 && x < 1 )?x+1:x*x-5*x+6;
     cout << f;
    return 0;
}
