#include <iostream>
#include <algorithm>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>

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
/*int main()
{
	int kinosal[5][5];
	// int kinosal3D [5][5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			kinosal[i][j] = 0;
		}
	}
	kinosal[2][2] = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << kinosal[j][i];
		}
		cout << endl;
	}
}*/

// Matematické funkce
/*int main()
{
	double d = 2.72;
	int a = (int)round(d);
	cout << d << endl;
	cout << a << endl;

	double vysledek = pow(2, 15);
	cout << vysledek << endl;

	double x = 30;
	double stupne = sin(x * (M_PI / 180));
	double radiany = sin(x);
	cout << "Sinus: " << x << endl;
	cout << "Stupne: " << stupne << endl;
	cout << "Radiany: " << radiany << endl;

	int modulo = 5 % 2;
	cout << modulo << endl;

}*/

// Ukazatele
/*int main()
{
	int a = 52;
	int *ukazatel = &a;
	cout << "Adresa: " << &a << endl;
	cout << "Ukazatel: " << ukazatel << endl;
	cout << "Na jakou hodnotu ukazuje: " << *ukazatel << endl;
	*ukazatel = 15;
	cout << "A nyni: " << *ukazatel << endl;
	cout << "A kontrola adresy: " << ukazatel << endl;
}*/

// Alokace paměti - ukazatel a reference
int main()
{
	// Vytvoří se ukazatel ve stacku (zásobník), který odkazuje na adresu např. 500 v heap (halda)
	int *p = new int;
	cout << "Adresa: " << p << ", Hodnota: " << *p << endl;

	// V heap se k adrese 500 přiřadí hodnota 5
	*p = 5;
	cout << "Adresa: " << p << ", Hodnota: " << *p << endl;

	// Změníme odkaz pointeru na novou proměnnou v heapu pomocí p = new int(10);, která má nyní adresu např. 700 a hodnotu 10, na proměnnou s hodnotou 5
	//	a adresou 500 však už není odkaz - je z ní nyní garbage, který zůstane v paměti a může dojít k jejímu přeplnění, měli bychom tedy použít
	//	delete p; . Ukazateli, který ukazuje do prázdné paměti haldy, se říká dangling pointer (visící ukazatel)
	delete p;
	p = NULL;
	p = new int(10);
	cout << "Adresa: " << p << ", Hodnota: " << *p << endl;
	//delete p;
	//p = NULL;
	cout << "Adresa: " << p << endl;
	// adresa přiřazena
}