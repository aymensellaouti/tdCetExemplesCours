#include<stdio.h>
#include<stdlib.h>

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

int main() {
	int** t;
	int n = 3, i = 0;
	
	t = (int**)malloc(n* sizeof(int*));
	
	for(i=0;i<n;i++) {
		t[i]=(int*) malloc(n*sizeof(int));
		remplirTab(t[i],n);
	}
	for (i=0;i<n;i++){
		printf("\n***************\n");
		afficherTab(t[i],n);
	}
	
	
}
