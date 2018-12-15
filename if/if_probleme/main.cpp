#include <iostream>

using namespace std;

int main()
{
    float x, y, maxi, mini, E;
    cout << "x= "; cin >> x;
    cout << "y= "; cin >> y;
    if (x > y){
        maxi = x;
        mini = y;
    } else {
        maxi = y;
        mini =x;
    }
    if(x*x - y*y > 1) {
        E = maxi;
    } else {
        E = mini;
    }
    cout << "E= " << E;
    return 0;
}
