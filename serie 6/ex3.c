#include<stdio.h>

int exist(Sportif* t, int n, int numero){
	int i = 0;
	for (i=0; i<n; i++) {
		if(t[i].numero == numero) {
			return 1;
		}
	}
	return 0;
}

void doublementInscrit(Sportif* sport1, int n1, Sportif* sport2, int n2, Sportif* sport3, int *n3){
	int i = 0;
	*n3 = 0;
	for (i=0; i<n1; i++) {
		if(exist(sport2, n2, sport1[i].numero)) {
			sport3[*n3]=sport1[i];
			*n3 = *n3 + 1;
		}
	}	
}
