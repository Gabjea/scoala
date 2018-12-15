#include <iostream>

using namespace std;

int main()
{
    int uc,pc,y,x;
    cout << "x= "; cin >> x; // 7512
    uc = x % 10; // 2
    pc = x / 1000; // 7
    y = (x % 1000) / 10; // 512
    x = uc * 1000 + y *10 +pc;
    cout << "x= " << x;
    return 0;
}
