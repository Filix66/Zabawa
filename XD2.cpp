#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <string>

using namespace std;

fstream plik;

void zad1(string text);
void zad2(string text);
void zad3(string text);
void zad4(string text);

int main()
{
    string text = "damian zamiast sie uczyc nic nie robi";
    //zad1(text);
	//zad2(text);
	//zad3(text);
	zad4(text);
}

void zad1(string text)
{
	for (size_t i = 0; i < text.length(); i++)
	{
		if (text[i] != ' ')
		{
			text[i] = text[i] - 32;
		}	
	}

	cout << text;
}

void zad2(string text) {
	
	for (size_t i = 0; i < text.length(); i++)
	{
		if (text[i] == ' ')
		{
			text.erase(i, 1);
		}
	}

	cout << text;
}

void zad3(string text) {
	for (size_t i = 0; i < text.length(); i++)
	{
		if (text[i] == 'a')
		{
			text[i] = 'X';
		}
	}

	cout << text;
}

void zad4(string text) {

	string newText = text;

	for (size_t i = text.length(); i >= 0; i--)
	{
		text[i] = newText[text.length() - 1 - i];
	}
}
