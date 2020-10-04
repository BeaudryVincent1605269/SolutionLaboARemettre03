// But : 
// Auteur : Vincent Beaudry
// Date : 2020-10-04

/*    Plan test
5000           625

4500           587.5

4000             550

110              258.25


*/


#include <iostream>

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	const int salaireSemaine = 250;                    // Salaire de base soit 250
	float totalVendu;                                        // nb de produit chimique vendu
	
	float salaireNet;               // somme 250 + ((totalVendu*7.5)/100)
	int nbSemaine = 0;              // Pour réinitaliser le nb de semaine 
	float sommeSalaires = 0;         // Pour additionner les salaires hebdomadaire


	cout << " Entrez le montant $ de produit chimique vendu cette semaine (ou -1 pour quitter) : " << endl;
	cin >> totalVendu;

	while (totalVendu != -1)
	{
		salaireNet = ((totalVendu * 7.5) / 100) + salaireSemaine;

		cout << salaireNet << endl;

		cout << " Entrez le montant $ de produit chimique vendu cette semaine (ou -1 pour quitter) : " << endl;
		cin >> totalVendu;

		


		// nbSemaine++;
	}







	return 0;
}