/**
fonction estCroissant(n : entier) : booleen
var

debut
//21354
tantque(n>9) faire 
	si ((n Mod 10) < ((n div 10) Mod 10)) alors 
		retourner faux
	finsi
	n <- n div 10
finTantque
 retourner (vrai)
fin
**/

int estCroissant(int n) {
	while(n>9) {
		if ((n % 10) < ((n / 10) % 10)){
			printf("%d est plus petit que %d\n",n % 10, (n / 10) % 10) ;
			return 0;
		}
		n = n/10;
	}
	return 1;
}

int main() {
	int n;
	printf("Donner un entier : ");
	scanf("%d", &n);
	if(estCroissant(n)){
		printf("%d est croissant", n);
	} else {
		printf("%d n'est pas croissant", n);
	}
	
}


   
