#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, P;
    float p, A;
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;
    if(a > 0 && b > 0 && c > 0){
        if (a+b > c && a+c > b && b+c > a) {
            P = a+b+c;
            A = sqrt(p*(p-a)*(p-b)*(p-c));
            p = A/2;
            cout << "P= " << P << endl;
            cout << "A= " << A;
        } else {
            cout << "cele 3 nr nu pot reprezenta laturile unui triunghi";
        }
    } else{
        cout << "cele 3 nr nu pot reprezenta laturile unui triunghi";
    }
    return 0;
}
