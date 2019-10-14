#include<stdio.h>

int main() {
	
	char c;
	int nba = 0, nbe = 0, nbi = 0, nbu = 0, nbo = 0;
	while((c=getchar())!='#'){
		if (c == 'a' || c== 'A') {
			nba++;
		} else if (c == 'e' || c== 'E') {
			nbe++;
		} else if(c == 'i' || c== 'I') {
			nbi++;
		} else if (c == 'o' || c== 'O') {
			nbo++;
		} else if (c == 'u' || c== 'U') {
			nbu++;
		}
	}
	
	printf("nbre a = %d \n", nba);
	printf("nbre e = %d \n", nbe);
	printf("nbre i = %d \n", nbi);
	printf("nbre o = %d \n", nbo);
	printf("nbre u = %d \n", nbu);				
}
