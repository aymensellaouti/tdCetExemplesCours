/*

Algorithme chiffreCubique
Var
nbreCubique, i : entier
Debut
	nbreCubique <- 0
	i <- 150
	tantque(nbreCubique != 4 ) faire
		//verifier que i est cubique ou non
		unit <- i Mod 10 
		dizaine <- i Mod 100 div 10  
		centaine <- i Div 100 
		// si cubique on affiche et on incremente		
		si (i = (unit * unit *unit) + (dizaine * dizaine * dizaine ) + (centaine * centaine * centaine)) alors
			ecrire (i)
			nbreCubique = nbreCubique +1
		finsi
	i <- i+1
	fintantque
Fin
*/

#include<stdio.h> 

int main() {
	int nbreCubique = 0, i = 150 ;
	int unit, centaine, dizaine;
	printf("Les nombres cubiques sont : ");
	while(nbreCubique != 4 ) {
				//verifier que i est cubique ou non
		unit = i % 10; 
		dizaine = (i % 100) / 10;  
		centaine = i / 100;
		// si cubique on affiche et on incremente		
		if (i == (unit * unit *unit) + (dizaine * dizaine * dizaine ) + (centaine * centaine * centaine)) {
			printf("%d \n", i);
			nbreCubique ++;
		}
		i++;
	}
}
