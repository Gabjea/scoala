#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>
#include <ctime>

using namespace std;

string word, cod;
int rasp, e;


void exit()
{
	system("cls");
	cout << "   Exiting";
	for (int x = 0; x < 1; x++)
	{
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		cout << "\n";
	}
}


void criptare()
{
	int I, K, J, R;
	char v1[100], v2[100], v3[100], v4[100], v5[100], v6[100];

	char a[250];

	a[1] = 'a'; a[2] = 'b'; a[3] = 'c'; a[4] = 'd'; a[5] = 'e'; a[6] = 'f'; a[7] = 'g'; a[8] = 'h'; a[9] = 'i'; a[10] = 'j'; a[11] = 'k'; a[12] = 'l'; a[13] = 'm'; a[14] = 'n'; a[15] = 'o'; a[16] = 'p'; a[17] = 'q'; a[18] = 'r'; a[19] = 's'; a[20] = 't'; a[21] = 'u'; a[22] = 'v'; a[23] = 'x'; a[24] = 'y'; a[25] = 'z'; a[0] = ' ';

	v1[0] = 'h'; v1[1] = 's'; v1[2] = 'c'; v1[3] = 'T'; v1[4] = 'K'; v1[5] = 'D'; v1[6] = 'Y'; v1[7] = 'R'; v1[8] = 'u'; v1[9] = 'J'; v1[10] = 'l'; v1[11] = 'v'; v1[12] = 'x'; v1[13] = 'p'; v1[14] = 'z'; v1[15] = 'm'; v1[16] = 'A'; v1[17] = 'G'; v1[18] = 'f'; v1[19] = 'O'; v1[20] = 'n'; v1[21] = 'q'; v1[22] = 'b'; v1[23] = 'i'; v1[24] = 'E';
	v2[0] = 'S'; v2[1] = 'x'; v2[2] = 'M'; v2[3] = 'y'; v2[4] = 'C'; v2[5] = 'a'; v2[6] = 'L'; v2[7] = 'I'; v2[8] = 'g'; v2[9] = 'v'; v2[10] = 'r'; v2[11] = 't'; v2[12] = 'B'; v2[13] = 'N'; v2[14] = 'F'; v2[15] = 'H'; v2[16] = 'Z'; v2[17] = 'e'; v2[18] = 'j'; v2[19] = 'Q'; v2[20] = 'k'; v2[21] = 'P'; v2[22] = 'U'; v2[23] = 'd'; v2[24] = 'o';
	v3[0] = 'q'; v3[1] = 'i'; v3[2] = 'v'; v3[3] = 'H'; v3[4] = 'a'; v3[5] = 'P'; v3[6] = 'B'; v3[7] = 'D'; v3[8] = 'Y'; v3[9] = 'm'; v3[10] = 'n'; v3[11] = 'f'; v3[12] = 'K'; v3[13] = 'L'; v3[14] = 'E'; v3[15] = 't'; v3[16] = 'r'; v3[17] = 'g'; v3[18] = 'X'; v3[19] = 'c'; v3[20] = 'Z'; v3[21] = 'O'; v3[22] = 'j'; v3[23] = 'U'; v3[24] = 's';
	v4[0] = 'C'; v4[1] = 'M'; v4[2] = 'd'; v4[3] = 'R'; v4[4] = 'h'; v4[5] = 'q'; v4[6] = 'j'; v4[7] = 'f'; v4[8] = 'N'; v4[9] = 'P'; v4[10] = 'k'; v4[11] = 'T'; v4[12] = 'i'; v4[13] = 'a'; v4[14] = 'G'; v4[15] = 'v'; v4[16] = 'E'; v4[17] = 'B'; v4[18] = 'y'; v4[19] = 'x'; v4[20] = 'U'; v4[21] = 'o'; v4[22] = 'S'; v4[23] = 'L'; v4[24] = 'z';
	v5[0] = 'd'; v5[1] = 's'; v5[2] = 'n'; v5[3] = 'p'; v5[4] = 'z'; v5[5] = 'o'; v5[6] = 'c'; v5[7] = 'v'; v5[8] = 'h'; v5[9] = 'a'; v5[10] = 'K'; v5[11] = 'm'; v5[12] = 'j'; v5[13] = 'x'; v5[14] = 'u'; v5[15] = 't'; v5[16] = 'y'; v5[17] = 'b'; v5[18] = 'F'; v5[19] = 'r'; v5[20] = 'l'; v5[21] = 'g'; v5[22] = 'e'; v5[23] = 'I'; v5[24] = 'q';
	v6[0] = 'Z'; v6[1] = 'V'; v6[2] = 'G'; v6[3] = 'r'; v6[4] = 'X'; v6[5] = 'Y'; v6[6] = 'U'; v6[7] = 'A'; v6[8] = 'O'; v6[9] = 'j'; v6[10] = 'H'; v6[11] = 'Q'; v6[12] = 'B'; v6[13] = 'P'; v6[14] = 'N'; v6[15] = 'E'; v6[16] = 'D'; v6[17] = 'K'; v6[18] = 'T'; v6[19] = 'I'; v6[20] = 'S'; v6[21] = 'M'; v6[22] = 'F'; v6[23] = 'l'; v6[24] = 'C';

	cin.ignore();
	cout << "   TEXT: "; getline(cin, word);
	srand(time(NULL));
	K = rand() % 6 + 1;
	R = K;
	cod = word;

	for (I = 0; I < word.length(); I++) {
		switch (K)
		{
		case 1:
			for (J = 0; J <= 24; J++) {
				if (word[I] == a[J]) {
					cod[I] = v1[J];
				}
			}
			K = 3;
			break;
		case 2:
			for (J = 0; J <= 24; J++) {
				if (word[I] == a[J]) {
					cod[I] = v2[J];
				}
			}
			K = 6;
			break;
		case 3:
			for (J = 0; J <= 24; J++) {
				if (word[I] == a[J]) {
					cod[I] = v3[J];
				}
			}
			K = 4;
			break;
		case 4:
			for (J = 0; J <= 24; J++) {
				if (word[I] == a[J]) {
					cod[I] = v4[J];
				}
			}
			K = 2;
			break;
		case 5:
			for (J = 0; J <= 24; J++) {
				if (word[I] == a[J]) {
					cod[I] = v5[J];
				}
			}
			K = 1;
			break;
		case 6:
			for (J = 0; J <= 24; J++) {
				if (word[I] == a[J]) {
					cod[I] = v6[J];
				}
			}
			K = 5;
			break;
		}

	}	cout << "   Mesajul este: | " << cod << " |\n" << endl;
	cout << "   Cheia este : | " << R << " |" << endl;
	if (true) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << "   Mesajul a fost codat cu succes!" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
}

void decriptare()
{
	int I, K, J;
	char v1[100], v2[100], v3[100], v4[100], v5[100], v6[100];

	char a[250];

	a[1] = 'a'; a[2] = 'b'; a[3] = 'c'; a[4] = 'd'; a[5] = 'e'; a[6] = 'f'; a[7] = 'g'; a[8] = 'h'; a[9] = 'i'; a[10] = 'j'; a[11] = 'k'; a[12] = 'l'; a[13] = 'm'; a[14] = 'n'; a[15] = 'o'; a[16] = 'p'; a[17] = 'q'; a[18] = 'r'; a[19] = 's'; a[20] = 't'; a[21] = 'u'; a[22] = 'v'; a[23] = 'x'; a[24] = 'y'; a[25] = 'z'; a[0] = ' ';

	v1[0] = 'h'; v1[1] = 's'; v1[2] = 'c'; v1[3] = 'T'; v1[4] = 'K'; v1[5] = 'D'; v1[6] = 'Y'; v1[7] = 'R'; v1[8] = 'u'; v1[9] = 'J'; v1[10] = 'l'; v1[11] = 'v'; v1[12] = 'x'; v1[13] = 'p'; v1[14] = 'z'; v1[15] = 'm'; v1[16] = 'A'; v1[17] = 'G'; v1[18] = 'f'; v1[19] = 'O'; v1[20] = 'n'; v1[21] = 'q'; v1[22] = 'b'; v1[23] = 'i'; v1[24] = 'E';
	v2[0] = 'S'; v2[1] = 'x'; v2[2] = 'M'; v2[3] = 'y'; v2[4] = 'C'; v2[5] = 'a'; v2[6] = 'L'; v2[7] = 'I'; v2[8] = 'g'; v2[9] = 'v'; v2[10] = 'r'; v2[11] = 't'; v2[12] = 'B'; v2[13] = 'N'; v2[14] = 'F'; v2[15] = 'H'; v2[16] = 'Z'; v2[17] = 'e'; v2[18] = 'j'; v2[19] = 'Q'; v2[20] = 'k'; v2[21] = 'P'; v2[22] = 'U'; v2[23] = 'd'; v2[24] = 'o';
	v3[0] = 'q'; v3[1] = 'i'; v3[2] = 'v'; v3[3] = 'H'; v3[4] = 'a'; v3[5] = 'P'; v3[6] = 'B'; v3[7] = 'D'; v3[8] = 'Y'; v3[9] = 'm'; v3[10] = 'n'; v3[11] = 'f'; v3[12] = 'K'; v3[13] = 'L'; v3[14] = 'E'; v3[15] = 't'; v3[16] = 'r'; v3[17] = 'g'; v3[18] = 'X'; v3[19] = 'c'; v3[20] = 'Z'; v3[21] = 'O'; v3[22] = 'j'; v3[23] = 'U'; v3[24] = 's';
	v4[0] = 'C'; v4[1] = 'M'; v4[2] = 'd'; v4[3] = 'R'; v4[4] = 'h'; v4[5] = 'q'; v4[6] = 'j'; v4[7] = 'f'; v4[8] = 'N'; v4[9] = 'P'; v4[10] = 'k'; v4[11] = 'T'; v4[12] = 'i'; v4[13] = 'a'; v4[14] = 'G'; v4[15] = 'v'; v4[16] = 'E'; v4[17] = 'B'; v4[18] = 'y'; v4[19] = 'x'; v4[20] = 'U'; v4[21] = 'o'; v4[22] = 'S'; v4[23] = 'L'; v4[24] = 'z';
	v5[0] = 'd'; v5[1] = 's'; v5[2] = 'n'; v5[3] = 'p'; v5[4] = 'z'; v5[5] = 'o'; v5[6] = 'c'; v5[7] = 'v'; v5[8] = 'h'; v5[9] = 'a'; v5[10] = 'K'; v5[11] = 'm'; v5[12] = 'j'; v5[13] = 'x'; v5[14] = 'u'; v5[15] = 't'; v5[16] = 'y'; v5[17] = 'b'; v5[18] = 'F'; v5[19] = 'r'; v5[20] = 'l'; v5[21] = 'g'; v5[22] = 'e'; v5[23] = 'I'; v5[24] = 'q';
	v6[0] = 'Z'; v6[1] = 'V'; v6[2] = 'G'; v6[3] = 'r'; v6[4] = 'X'; v6[5] = 'Y'; v6[6] = 'U'; v6[7] = 'A'; v6[8] = 'O'; v6[9] = 'j'; v6[10] = 'H'; v6[11] = 'Q'; v6[12] = 'B'; v6[13] = 'P'; v6[14] = 'N'; v6[15] = 'E'; v6[16] = 'D'; v6[17] = 'K'; v6[18] = 'T'; v6[19] = 'I'; v6[20] = 'S'; v6[21] = 'M'; v6[22] = 'F'; v6[23] = 'l'; v6[24] = 'C';

	cin.ignore();
	cout << "   TEXT: "; getline(cin, cod);
	cout << "   CHEIE: "; cin >> K;
	srand(time(NULL));
	word = cod;
	for (I = 0; I < word.length(); I++) {
		switch (K)
		{
		case 1:
			for (J = 0; J <= 24; J++) {
				if (cod[I] == v1[J]) {
					word[I] = a[J];
				}
			}
			K = 3;
			break;
		case 2:
			for (J = 0; J <= 24; J++) {
				if (cod[I] == v2[J]) {
					word[I] = a[J];
				}
			}
			K = 6;
			break;
		case 3:
			for (J = 0; J <= 24; J++) {
				if (cod[I] == v3[J]) {
					word[I] = a[J];
				}
			}
			K = 4;
			break;
		case 4:
			for (J = 0; J <= 24; J++) {
				if (cod[I] == v4[J]) {
					word[I] = a[J];
				}
			}
			K = 2;
			break;
		case 5:
			for (J = 0; J <= 24; J++) {
				if (cod[I] == v5[J]) {
					word[I] = a[J];
				}
			}
			K = 1;
			break;
		case 6:
			for (J = 0; J <= 24; J++) {
				if (cod[I] == v6[J]) {
					word[I] = a[J];
				}
			}
			K = 5;
			break;
		default:
			srand(time(NULL));
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "   Cheia nu este valida";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			for (int x = 0; x < 1; x++)
			{
				Sleep(1500);
				cout << ".";
				Sleep(1500);
				cout << ".";
				Sleep(1500);
				cout << ".";
				system("cls");
				decriptare();
			}
			break;
		}

	}

	cout << "   Mesajul decodat este: | " << word << " |" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << "   Mesajul a fost decodat cu succes!" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

}

void setUP()
{
	system("title Encrypter");
}


void text_draw()
{
	cout << "                           _________________________" << endl;
	cout << "                          |                         |" << endl;
	cout << "                          |        ENCRYPTER        |" << endl;
	cout << "                          |_________________________|" << endl;
	cout << "                           BY GABJEA            v1.0";
}

int main()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	setUP();
	text_draw();
	cout << "\n\n\n\n\n" << endl;
	cout << "  |1.Encrypt | 2. Decrypt | 3.Exit|" << endl;
	cout << "    *ALEGE O OPTIUNE: "; cin >> rasp;
	if (rasp == 1)
	{
		system("cls");
		criptare();
	}
	else if (rasp == 2)
	{
		system("cls");
		decriptare();
	}
	else if (rasp == 3)
	{
		exit();
		return 0;
	}
	cout << "\n   |1.Inapoi | 2.Exit|" << endl;
	cout << "    *ALEGE O OPTIUNE: "; cin >> e;
	if (e == 1)
	{
		system("cls");
		return main();
	}
	else if (e == 2)
	{
		exit();
	}
	return 0;
}
