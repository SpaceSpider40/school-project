#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

void test(), resoults();
string text;
char odp[10];
int popOdp = 0;

ifstream zPliku;


int main()
{
	zPliku.open("Dane.txt");

	if (zPliku)
	{
		test();
	}
	else
	{
		cout << "===Blad===" << endl;
		cout << "===Plik nie zostal znaleziony===";
	}
}

void test() {

	for (int i = 0;i < 10; i++)
	{
		cout << "=======================================" << endl;
		cout << "===Test wiedzy z zakresu informatyki===" << endl;
		cout << "=======================================" << endl;
		cout << endl;
		for (int j = 0 ;j < 6; j++)
		{
			getline(zPliku, text);
			cout << text << endl;
		}
		cout << "Odpowiedz: ";
		cin >> odp[i];
		system("cls");
	}
	resoults();
}

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
