#include <iostream>

using namespace std;

int main()
{
    unsigned a;
    cout << "Nota lui Gigel este: "; cin >> a;
    switch(a) {
    case 0:
        cout << "TATA: Esti atata de prost ca nici macar nu poti lua noata asta, dar vad ca esti mai special";
        break;
    case 1:
        cout << "TATA: Dc ai copiat copile, nici sa copiezi nu esti in stare";
        break;
    case 2:
        cout << "TATA: Dormi afara";
        break;
    case 3:
        cout << "TATA: Treci la invatat";
        break;
    case 4:
        cout << "TATA: De maine ai meditatii";
        break;
    case 5:
        cout << "TATA: Macar treci, dar tre sa te pui pe invatat";
        break;
    case 6:
        cout << "TATA: Daca nu ii la mate sau info ii bine";
        break;
    case 7:
        cout << "TATA: Ii ok";
        break;
    case 8:
        cout << "TATA: Ii ok";
        break;
    case 9:
        cout << "TATA: Puteai lua 10";
        break;
    case 10:
        cout << "Bravo";
        break;
    default:
        cout << "Cum ... ai putut lua atata... esti geniu";
    }
    return 0;
}
