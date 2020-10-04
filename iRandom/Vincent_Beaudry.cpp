// But :
// Nom :
// Date :

#include <iostream>
#include <time.h>

using namespace std;

int main()

{

	setlocale(LC_ALL, "");


	const int nbDeChance = 5;
	const int FIN = 4;
	int iRandom;
	int nb;
	int chanceRestante;

	srand(time(0));

	iRandom = rand() % 101;
	
	cout << " Veuillez entrez un nombre entier entre 1 et 100 : " << endl;
	cin >> nb;

	


	for (int compteur = 1; compteur <= FIN; compteur++)
	{
		
		

		if (nb > 0 && nb < 101)
		{

			if (nb == iRandom)
			{
				cout << "!!! Vous avez gagner !!! ";
				system("pause");
				return 0;
			}
			else
			{
				chanceRestante = nbDeChance - compteur;
				cout << " Veuillez recommencer et il vous reste : " << chanceRestante << " chance" << endl;

				cin >> nb;


				system("cls");
			}
		}
		else
		{
			compteur--;
			cout << " Les chiffre doit etre compris entre 1 et 100. Inquiétez vous pas je suis gentil vous n'avez pas perdu de chance." << endl;
			system(" pause");
			chanceRestante = nbDeChance - compteur;
			cout << " Veuillez recommencer et il vous reste : " << chanceRestante << " chance" << endl;
			cout << " Veuillez entrez un nombre entre 1 et 100 " << endl;

			cin >> nb;
		}
	}

	cout << " Vous n'avez plus de chance ";


	return 0;
}