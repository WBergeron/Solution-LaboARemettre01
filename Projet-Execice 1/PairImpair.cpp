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

/* Plan de tests
* 
* NombreEntier	/	Modulo		/	Résultat
* 
*		2				2				2 est un nombre pair
*		0				2				0 est un nombre pair
*		-1				2				-1 est un nombre impair
*		867000			2				867000 est un nombre pair
*		-99				2				-99 est un nombre impair
* // KM : Je pense qu'il y a erreur dans les résultats car %2 ne peut donner que 0 ou 1 comme résultat
* 
*/
