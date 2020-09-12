// But : Programme qui détermine si un nombre est pair ou impair
// Auteur : Liam Willis
// Date : 9-12-2020

#include <iostream> 

using namespace std;

void main()
{
	setlocale(LC_ALL, "");        // pour convertir correctement les accents dans la console

	// ici, on déclare le chiffre.
	int nombre1;

	

	std::cout << "veuillez enter un nombre : "; //on invite l'utilisateur à entrer un nombre

	std::cin >> nombre1;  // le clavier doit lire le nombre

	if (nombre1 & 1) //bloc instruction si nombre pair
	{
		std::cout << nombre1 << " est un nombre impair";
	}
	else              //bloc instruction pour nombre impair
	{
		std::cout << nombre1 << " est est un nombre pair";
	}
} 
// le plan test
/*
nombre1     résultat

8           8 est un nombre pair

3           3 est un nombre impair

-2         -2 est un nombre pair

-7         -7 est un nombre impair




*/