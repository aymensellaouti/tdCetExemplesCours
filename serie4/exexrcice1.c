#include<stdio.h>

//1 2 1 1 2 3 2 2 1 2 2 1 3 3 1 3 2 1 4  
//1 2
void afficherTableau1D(int* t, int n) {
	int j;
	for (j=0; j < n; j++){
		printf("%d\t",t[j]);
	}
}

int search(int* t, int n, int x) {
	n--;
	while(n>=0){
		if(t[n]==x)
			return 1;
		n--;
	}
	return 0;
}

void deleteOcc(int* t, int* n) {
	int i, nb = 1;
	for(i=1; i<*n;i++) {
		if(!search(t,nb,t[i])){
			t[nb] = t[i];
			nb++;
		}
	}
	*n = nb;
}


int main() {
	int t[20] = {1, 2, 1, 1, 2, 3, 2, 2, 1, 2, 2, 1, 3, 3, 1, 3, 2, 1, 4};
	int n = 19;
	deleteOcc(t,&n);
	afficherTableau1D(t,n);
	printf("\n");
	afficherTableau1D(t,19);		
}
