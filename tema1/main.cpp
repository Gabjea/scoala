#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int a;
    srand (time(NULL));
    for(int i =0; i<14; i++){
    a = rand() % 14 + 1;
    cout << a << endl;
    }

    return 0;
}
