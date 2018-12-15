#include <iostream>

using namespace std;

int main()
{
    int a,b, c;
    unsigned x;
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "x= "; cin >> x;
    switch(x) {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a-b;
        break;
    case 3:
        c = b - a;
        break;
    case 4:
        c = a*b;
        break;
    case 5:
        c = a/b;
        break;
    case 6:
        c = a % b;
        break;
    case 7:
        c = b/a;
        break;
    default:
        cout << "Nu convine";
        break;
    }
    cout << "c= " << c;
    return 0;
}
