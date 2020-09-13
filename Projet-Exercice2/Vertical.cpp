// But : Crée un programme qui lit les entrers de nombre ayant 5 chiffre et lit ce même nombre verticalement
// Auteur : William Bergeron
// Date : 2020-09-13

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int nombreUtilisateur;
	int diviseur;
	int nombreVerificateur;
	


	cout << "Veuiller entrer un nombre entier ayant 5 chiffres :";
	cin >> nombreUtilisateur;

	diviseur = 1000;


	nombreVerificateur = nombreUtilisateur / diviseur;


	if (nombreVerificateur >= 1)
	{

		cout << nombreUtilisateur <<


	}
	else
	{

		cout << nombreUtilisateur << " - Ce nombre ne contient pas 5 chiffres ";

	}



	return 0;
}