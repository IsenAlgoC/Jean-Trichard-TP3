#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define NBMAXNOTES 30


int main(){

	float note = 0;
	float allnote[NBMAXNOTES];
	int comp = 0;
	int i = 0;
	char rep = 'e';
	char fin = 'N';
	int nb_abs = 0;
	float sum = 0;
	float petit = 20;
	float grand = 0;
	float ET = 0;

	for (i = 0; i < NBMAXNOTES; i++)
		allnote[i] = -2;

	while ((comp < NBMAXNOTES) && (fin != 'O')){
		printf("Entrer la note %d :",comp);
		scanf_s("%f", &note);
		if ((note < 0) || (note > 20)) {
			printf("Eleve absent ? ou voulez-vous arreter la saisie des notes ? A/O/N\n");
			rep = 'e';
			while (rep != 'a' && rep != 'A' && rep != 'o' && rep != 'O' && rep != 'n' && rep != 'N') {
				scanf_s("%c", &rep);
			}
			switch (rep) {
			case 'a':
				allnote[comp] = -1;
				comp++;
				nb_abs++;
				break;
			case 'A':
				allnote[comp] = -1;
				comp++;
				nb_abs++;
				break;
			case 'o':
				fin = 'O';
				break;
			case 'O':
				fin = 'O';
				break;
			case 'n':
				fin = 'N';
				break;
			case 'N':
				fin = 'N';
				break;
			}
		}
		else {
			if (note > grand) {
				grand = note;
			}
			if (note < petit) {
				petit = note;
			}
			sum = sum + note;
			allnote[comp] = note;
			comp++;
		}
	}
	sum = sum / (comp - nb_abs);

	i = 0;



	printf("\nLe nombre d'absences est de %d\n", nb_abs);
	printf("\nLa moyenne des notes valides est de %.2f\n", sum);
	printf("\nLa plus petite note est de %.2f\n", petit);
	printf("\nLa plus grande note est de %.2f\n", grand);

	
	

	system("pause");
	return(EXIT_SUCCESS);
}