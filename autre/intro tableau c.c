#include<stdio.h>

void remplirTab(int* t, int n ){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("donner l'entier numero %d :", i+1);
		scanf("%d", t+i);		
	}
}

void afficherTab(int t[], int n){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("t[%d] = %d \n", i+1, t[i]);
	}

}

 int rechercheDansTab(int* t, int n , int val) {
	int i = 1; 	
	while (i <= n ) { 
 		if (t[i] == val) { 
 			return i;
		}
 		i++ ;
 	}
 	return -1 ;
 }
 
 int rechercheDicho(int* t, int n , int val) {
 	int	m , binf = 0 , bsup = n-1;  
	while(binf <= bsup){
		m = (binf + bsup) / 2 ;
	 	if (t[m] == val) 
	 		return (m);
	 	else if (t[m] > val) 
	 		bsup = m - 1;
	 	else 
	 		binf = m + 1 ;
	}
 	return (-1);
 }


int main() {
	int n = 0;
	int ind = 0, val = 0 ;
	int t[10]; // On va chercher dix cases consécutives de type int
			   // il va chercher 10 * sizeof(int) octets consécutives dans la RAM	
	do{
		printf("Donne le nombre de cases a remplir : ");
		scanf("%d", &n);
	}while(n<1 || n>10);
	remplirTab(t,n);
	afficherTab(t,n);
	printf ("Donner la valeur à rechercher : ");
	scanf("%d", &val);
	ind = rechercheDicho(t,n,val);
	if (ind == -1 ) {
		printf("%d n apparait pas dans ce tableau", val);
	} else {
		printf("%d apparait dans la position %d dans ce tableau", val, ind + 1);
	}
	// printf("%d \n", t);
	// printf("%d \n", t+1); // calculer t + 1*(sizeof(int))
	// printf("%d \n", t+2); // calculer t + 2*(sizeof(int))
	// t+i = t [la première case] => i = t-t = 0 
	//	t[0] => la première case du tableau
	// *t => *t == t[0]   , *(t+1)  == t[1]
	// t l'adresse de la première case
	// la première case c'est t[0]
	// donc t <==> &t[0]
}
