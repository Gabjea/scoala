#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;
    if (b > a && c>a) {
        cout << "a= " << a <<endl;
        if(b > c) {
            cout << "c= " << c <<endl;
            cout << "b= " << b <<endl;
        } else {
            cout << "b= " << b << endl;
            cout << "c= " << c << endl;
        }
    }
    if (a > b && b < c) {
        cout << "b= " << b << endl;
        if (a > c){
            cout << "c= " << c <<endl;
            cout << "a= " << a << endl;
        } else {
            cout << "a= " << a << endl;
            cout << "c= " << c <<endl;
        }
    }
    if(a > c && b > c) {
        cout << "c= " << c << endl;
        if (a > b){
            cout << "b= " << b <<endl;
            cout << "a= " << a << endl;
        } else {
            cout << "a= " << a << endl;
            cout << "b= " << b <<endl;
        }
    }
    else{
        cout << "Toate sunt egale cu: " << a;
        }
    return 0;
}
