// struktury.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;
double srednia=0;



struct przedmiot
{
	string name;
	double liczba_ocen;
	double oceny[25];
};
		double suma(double s)
		{
				
			srednia +=  s;
			
			return srednia;
			
		}
int main()
{
	int przedmioty;
	cout<<"ile masz przedmiotow?: ";
	cin >> przedmioty;
	
	for (int i = 0; i < przedmioty; i++)
	{
		przedmiot oceny[24];
		cout << "podaj nazwe przedmiotu: ";
		cin >> oceny[i].name;
		cout << "ile ocen z "<<oceny[i].name<<": ";
		cin >> oceny[i].liczba_ocen;
		if (oceny[i].liczba_ocen > 25)
		{
			cout << "za duzo ocen\n";
		}
		else
		{
			for (int j=0; j < oceny[i].liczba_ocen; j++)
			{
				cout << "podaj  " << j+1 << " ocene: ";
				cin >> oceny[i].oceny[j];
				
				suma(oceny[i].oceny[j]);
				
				
			}
			cout << srednia<<endl;
			cout << oceny[i].liczba_ocen << endl;
			cout << srednia/oceny[i].liczba_ocen;
			srednia = 0;
			
		}
	}
	cin.get();cin.get();
    return 0;
}