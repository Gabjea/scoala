#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a= ";
    cin >> a;
    cout << "\n" << "b= ";
    cin >> b;
    c =(a>b)?a:b;
    cout << "\n" << "max= " << c;
    return 0;
}
