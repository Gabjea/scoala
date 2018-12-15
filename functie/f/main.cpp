#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x,f;
    cout << "x= "; cin >> x;
    if (x<1) {
        f = sqrt(x*x+x+2);
    } else {
        if(x>= 1 && x<=2) {
            f = x*3-2;
        } else{
            if(x>2) {
                f = (5*x-2)/(x+2);
            }
        }
    }
    cout << "f= " << f;
    return 0;
}
