#include<stdlib.h>
#include<stdio.h>

#define carre(x) (x) * (x)

int main() {
	int Nb = 5;
	printf("Valeur de 5 au carre : %d\n", carre(Nb));
	printf("Valeur de 6 au carre : %d\n", carre(Nb + 1));

	//macro donné : #define carre(x) x * x 
	//Pour la valeur de 6 au carre on obtient le calcul suivant : 5+1x5+1=11
	//Il faut donc ajouter des parenthèses

	system("pause");
	return(EXIT_SUCCESS);
}