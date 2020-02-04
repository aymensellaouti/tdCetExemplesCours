#include<stdio.h>
/*
 1 2 3 2 2 3 3 2 2 1
 nb = 3
 1 2 3
*/

void remplirTab(int *t, int n) {
	int j;
	for (j=0; j < n; j++){
		printf("Donnez la case numero %d : ", j+1);
		scanf("%d", &t[j]);	
	}
}

void afficherTableau1D(int* t, int n) {
	int j;
	for (j=0; j < n; j++){
		printf("%d\t",t[j]);
	}
}
int exist(int* t, int x, int n){
	int i = 0;
	while( i<n ) {
		if (t[i]==x)
			return 1;
		i++;
	}
	return 0;		
} 

void deleteOcc(int* t, int* n) {
	int nb = 1;
	int i;
	for(i=1;i<*n;i++){
		if(!exist(t,t[i],nb)){
			t[nb] = t[i];
			nb++;
		}
	}
	*n = nb;
}

int main() {
	int n = 10;
	int t[20] = { 1, 1, 1, 2, 2, 3, 3, 2, 2, 1};
	deleteOcc(t,&n);
	afficherTableau1D(t,10);
}
