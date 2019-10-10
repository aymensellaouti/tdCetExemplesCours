/**
fonction estCroissante(n : entier) : booleen
var 
debut
	tantque(n>9) faire
		si ((n Mod 10) < (n div 10) mod 10) alors
			returner (faux)
		finsi
		n <- n div 10
	fintanque
	retourner(vrai)
fin 
#include<stdio.h>


