// But : Créer un programme qui affiche un nombre a 5 chiffres à la verticale
// Auteur : Liam Willis
// Date : 09-12-2020

#include <iostream>;

using namespace std;

void main()
{
	setlocale(LC_ALL, "");      // pour convertir correctement les accents dans la console

		int z1;    //pour mémoriser un nombre
	
	

	std::cout << " veuillez entrer un nombre a 5 chiffres ";  // on demande a l'utilisateur d'entrer le nombre

	std::cin >> z1;        // déclare la variable

	if (z1 <= 9999) (z1 >= 100000);        // si le nombre est trop petit ou trop grand:
	{
		std::cout << " ce nombre ne contient pas 5 chiffres";     //afficher ca a l'écran
	}

	else       //sinon, projeter le nombre verticalement
	{
		std::cout << z1 / 10000;
		std::cout << z1 / 1000;
		std::cout << z1 / 100;
		std::cout << z1 / 10;
		std::cout << z1 / 1;
	}



} // plan test
/*
    z1         résultat
	
	132        ce nombre ne contient pas 5 chiffres

	12345      1
	           12
			   123
			   1234
			   12345



*/