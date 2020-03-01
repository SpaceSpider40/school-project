#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

void test();
string text;
char odp[10];
int popOdp = 0, i = 0;
bool err = false;

ifstream zPliku("C:/Users/space/Desktop/index2/Debug/Dane.txt");

void resoults() {

	char txtchr;

	for (int i = 0; i < 10; i++)
	{
		zPliku.get(txtchr);
		if (odp[i] == txtchr) {
			popOdp++;
		}
	}
	cout << "==================" << endl;
	cout << "=== Twoj wynik ===" << endl;
	cout << "==================" << endl;
	cout << endl;
	cout << "---" << popOdp << " poprawnych odpowiedzi na 10---";
}


int main()
{
	//zPliku.open("C:/Users/space/Desktop/index/Debug/Dane.txt");

	if (zPliku)
	{
		test();
	}
	else
	{
		cout << "===Blad===" << endl;
		cout << "===Plik nie zostal znaleziony===";
	}

	return 0;
}

void test() {

	for (i = 0; i < 10; i++)
	{
		cout << "=======================================" << endl;
		cout << "===Test wiedzy z zakresu informatyki===" << endl;
		cout << "=======================================" << endl;
		cout << endl;
		for (int j = 0; j < 6; j++)
		{
			getline(zPliku, text);
			cout << text << endl;
		}
	err:
		cout << "Odpowiedz: ";
		cin >> odp[i];
		switch (odp[i])
		{
		case('a'):
		case('A'):
			err = false;
			break;
		case('b'):
		case('B'):
			err = false;
			break;
		case('c'):
		case('C'):
			err = false;
			break;
		case('d'):
		case('D'):
			err = false;
			break;
		default:
			err = true;
			break;
		}
		if (err) {
			cout << "niepowrawna wartosc" << endl;
			goto err;
		}
		system("cls");
	}
	resoults();
}