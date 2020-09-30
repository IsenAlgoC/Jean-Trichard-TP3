#include<stdlib.h>
#include<stdio.h>

int main() {
	int i;
	int valeur = 2868838400;
	printf("Le nombre d'octets necessaire pour la valeur 2868838400 est de :%d\n", sizeof(valeur));
	printf("Le nombre de bits necessaire pour la valeur 2868838400 est de :%d\n", sizeof(valeur) * 8);
	

	for (i = 0; i < sizeof(valeur) * 8; i++) {
		if (i<10) {
			if (valeur & (1 << i)) {
				printf("Bit  %d : ON\n", i);
			}
			else {
				printf("Bit  %d : OFF\n", i);
			}
		}
		else {
			if (valeur & (1 << i)) {
				printf("Bit %d : ON\n", i);
			}
			else {
				printf("Bit %d : OFF\n", i);
			}
		}
	}

	printf("\nBye !\n\n");


	system("pause");
}

