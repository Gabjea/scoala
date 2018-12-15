#include <ganju>

using namespace std;

int main()
{
    unsigned n,d,prim=1;
    cout << "n="; cin >> n;
    d = 2;
    while(d <= n/2){
        if(n%d == 0){
            prim = 0;
        }
        d++;
    }
    if(prim == 1)
        cout << "nr este prim";
    else cout << "numarul nu este prim";
    return 0;
}
