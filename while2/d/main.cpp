#include <iostream>

using namespace std;

int main()
{
    unsigned x=0,c=0,ap=0;
    cout << "x= ";cin >>x;
    cout << "c=";cin >> c;
    if(c < 10){
        while(x != 0){
            if(x%10 == c){
                ap++;
            }
            x/=10;
        }
        cout << "Nr de apartii este: " << ap;
    } else
        cout << "C nu este o cifra.";
    //ap = 5/10;cout << ap; // 0
    return 0;
}
