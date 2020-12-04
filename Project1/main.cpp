#include<iostream>
#include<math.h>
#include"Header.h"

using namespace std;

int main()
{
	complexe C1(3.1,2.5);
	complexe C2(1.6, 2.3);
	complexe C3 = C1.operator+(C2);
	complexe C4 = C1.operator+(10);
	complexe C5 = C1.operator-(C2);
	complexe C6 = C1.operator*(C2);

	//affichage de la fonction
	cout << "C1 = ";
	C1.affichage();

	//calcul et affichage module
	cout << "Le module de C1 = " << C1.module() << endl;

	//calcul et affichage conjugué
	C1.conjugue();
	cout<<"Le conjugue de C1 = ";
	C1.affichage();

	//addition de deux complexes
	cout << "C1 + C2 = ";
	C3.affichage();

	//addition complexe et réel
	cout << "C1 + X = ";
	C4.affichage();

	//soustraction de deux complexes
	cout << "C1 - C2 = ";
	C5.affichage();

	//multiplication de deux complexes
	cout << "C1 * C2 = ";
	C6.affichage();


	return 0;
}