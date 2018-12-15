#include <iostream>

using namespace std;

int main()
{
    unsigned x,c,c1,a=0,p=1;
    cout << "x= ";cin>>x;
    cout << "c= ";cin >>c;
    cout << "c1=";cin >> c1;
    if(c < 10){
        while(x !=0){
            if(x%10 == c){
                a = c1*p+a;
            } else a= x%10*p+a;
            p = p*10;
            x/=10;
        }
        cout << "a= " << a;
    }else cout << "c nu este cifra.";
    return 0;
}
