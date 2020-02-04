#include<stdio.h>
	
	//t adresse de la première case *t  <=>  t[0]
	//t+1 adresse de la deuxième  case *(t+1)  /  t[1]

void remplirTab(int* n, int* t) {
	int i;
	do{
		printf("Donner le nombre d'entier à inserer : ");		
		scanf("%d",n);
	}while(*n<=0 || *n> 100);

	for (i = 0 ; i < *n ; i++) {
		printf("Donner le %d entier : ", i+1);
		scanf("%d", t+i);
	}
}

void affichage(int n, int* t) {
	int i;
	for (i = 0 ; i < n ; i++) {
		printf("t[%d] = %d \n", i, t[i]);
	}
}

	int findSupValueInTab(int* t,int n, int val){
		int i=0;
		while(i<n) {
			if(t[i] >= val)
				return i;
			i++;
		}
		return n;	
	}

	void shiftRight(int* t,int index, int* n){
		int i;
		for(i = *n; i > index; i--) {
			t[i] = t[i-1];
		}
		*n = *n + 1;
	}

void addInSortedTab(int* t, int* n, int val) {
	int index;
	index = findSupValueInTab(t,*n, val);
	shiftRight(t,index,n);
	t[index] = val;
}

int main() {
	int t[100];
	int n = 0;
	remplirTab(&n,t);
	affichage(n,t);
	addInSortedTab(t,&n,4);
	printf("******************\n");
	affichage(n,t);
}
