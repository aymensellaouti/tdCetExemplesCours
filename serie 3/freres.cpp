#include<stdio.h>
void saisieEntierPositif(int* m){
	*m = 5;
	do {
		printf("Donner un entier positif : ");
		scanf("%d", m);
	} while(*m < 0);
}

int chiffreDansEntier (int chiffre, int entier) {
	while(entier > 0) {
		if(entier % 10 == chiffre)
			return 1;
		entier = entier / 10;
	}
	return 0;
}

int entierDansEntier (int n1, int n2) {
	while(n1>0) {
		if(chiffreDansEntier(n1%10, n2) == 0){
			return 0;
		}
		n1 = n1 / 10;
	}
	return 1;
}

int main() {
	int m1, m2;
	saisieEntierPositif(&m1);
	saisieEntierPositif(&m2);
	if(entierDansEntier(m1,m2)&&entierDansEntier(m2,m1) ) {
		printf("%d et %d sont freres :)", m1,m2);
	} else {
		printf("%d et %d ne sont pas freres :(", m1,m2);
	}
}



