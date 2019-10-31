#include<stdio.h>

void remplirTab(int* t, int n ){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("donner la case numero %d :", i+1);
		scanf("%d", t+i); // scanf("%d", &t[i]);  		
	}
}

void afficherTab(int t[], int n){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("%d\t ", t[i]);
	}
}


void lireEntierStrictementPositif(int* n) {
	do {
		printf("Donner un nombre positif : ");
		scanf("%d", n);
	}while(*n <=0 );
}
void getMinMax(int* t, int binf, int bsup, int* min, int* max) {
	int i = 0;
	*min = binf;
	*max = binf;
	for(i = binf+1; i <= bsup; i++) {
		if (t[*min] > t[i]) {
			*min = i;			
		} else if (t[*max] < t[i]) {
			*max = i;						
		}  
	}
	printf("min = %d max = %d\n",*min, *max);
}

void permuter( int* a, int* b) {
	printf("\nPErmut a = %d b = %d\n",*a, *b);
		*a = *a + *b;
	printf("\nPErmut a = %d b = %d\n",*a, *b);
		*b = *a - *b;
	printf("\nPErmut a = %d b = %d\n",*a, *b);
		*a = *a - *b;	
	printf("\napres PErmut a = %d b = %d\n",*a, *b);
}

void TriMinMax(int n, int* t){
	int i = 0, min = 0, max = 0;	
	for (i=0; i<n/2;i++){
		getMinMax(t, i, n-i-1, &min, &max);
		if (i!= min) {
			permuter(t+i, t+min); // équivault permuter(&t[i], &t[min]); 
		}
		if(max != n-i-1){
			if (i != max) 
				permuter(&t[n-i-1], &t[max]);
			else
				permuter(&t[n-i-1], &t[min]);
		}
		printf("\nApres permutation tab : \n");
		afficherTab(t,n);
		printf("\n");
	}
}


int main() {
	int t[20];
	int n;	
	lireEntierStrictementPositif(&n);
