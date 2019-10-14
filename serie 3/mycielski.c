/**

fonction Mycielski(n : entier) : entier
var
c,m,i : entier
debut
    c <-1
    m <-2
	pour i<-2 à n faire 
		c <- (3*c)+m
		m <- (2*m)+1
	fin
	retrouner (c)
fin 
**/
#include<stdio.h>
int mycielski(int n) {
	int c = 1, m = 2, i=0;
	for(i = 2 ; i<=n; i++ ){
		c = (3*c)+m ;
		m = (2*m)+1 ;		
	}
	return(c);	
}



