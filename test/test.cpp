﻿#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

	// Načtení jména a pozdravení + pole
	/*int main()
	{
		string jmeno;
		string odpoved;
		bool znovu = true;
		int pozice = 0;
		const int delkaPole = 3;
		string jmena[delkaPole];

		for (int i = 0; i < 3; i++)
		{
			cout << "Ahoj" << endl;
		}
		while (znovu)
		{
			cout << "Zadej svoje jmeno: ";
			cin >> jmeno;
			cout << "Jmenujes se " << jmeno << " ?" << endl;
			cin >> odpoved;

			if (odpoved == "ano")
			{
				cout << "Zdravim te, " << jmeno << "!" << endl;
				jmena[pozice] = jmeno;
				pozice++;
				cout << "Chces zadat dalsi jmeno?" << endl;
				cin >> odpoved;
				if (odpoved == "ano")
				{
					znovu = true;
				}

				else if (odpoved == "ne")
				{
					cout << "Zadal jsi jmena: " << endl;
					string* j = find(jmena, jmena + delkaPole, "mike");
					cout << "Hodnota j: " << j << endl;
					int pozice = j - jmena;
					cout << "Prvek je na pozici " << pozice << "." << endl;
					for (int i = 0; i < delkaPole; i++)
					{
						cout << jmena[i] << endl;
					}
					znovu = false;
				}

			}

		}

	}*/

	// Načtení jména a převedení jednotlivých znaků do ASCII hodnoty
	/*int main()
	{
		string jmeno;
		char c;
		int a;
		cout << "Zadej jmeno: ";
		cin >> jmeno;
		//getline(cin, jmeno);
		cout << "Zdravim " << jmeno << endl;
		cout << "Tvoje jmeno v ASCII: " << endl;
		for (int i = 0; i < jmeno.length(); i++)
		{
			c = jmeno[i];
			a = (int)c;
			cout << jmeno[i] << ":" << a << endl;
		}
	}*/

	// Posunutí písmen v řetězci o 1 v abecedě
	/*int main()
	{
		string s = "ahojjaksemas";
		for (int i = 0; i < s.length(); i++)
		{
			s[i] += 1;
		}
		cout << s;
	}*/

	// Vícerozměrné pole
int main()
{
	int kinosal[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			kinosal[i][j] = 0;
		}
	}
}