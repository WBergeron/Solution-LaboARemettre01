// But : Écrire un programme qui lit un entier et qui détermine et affiche s'il s'agit d'un entier pair ou d'un entier impair.
// Auteur : William Bergeron
// Date : 2020-09-09

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int nombreEntier;
	int nombreModolo;
	int nombreResultat;

	nombreModolo = 2;

	cout << "Veuillez entrer un nombre entier :";
	cin >> nombreEntier;

	nombreResultat = nombreEntier % nombreModolo;

	if (nombreResultat == 0)
	{

		cout << nombreEntier << " est un nombre pair ";


	}
	else
	{

		cout << nombreEntier << " est un nombre impair";

	}




	




	return 0;
}