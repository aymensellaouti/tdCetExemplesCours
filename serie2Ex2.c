Exercice 2 série 2
Algorithme equatinSecondDegre 

var 
a, b, c, delta : reel

debut 
	ecrire("donner le premier coefficient : ")
	lire(a)
	
	si (a != 0 ) alors	
		ecrire("donner le second coefficient : ")
		lire(b)
		ecrire("donner le troisième coefficient : ")
		lire(c)
		// aller reviser le programme de 5éme année si ((a+b+c)=0 )
		delta <- (b*b) - 4 * a * c
		si (delta < 0 ) alors 
			ecrire ("aucune solution")
		sinon si (delta = 0) alors
			ecrire ("solution unique : ", -b / (2*a)
		sinon 
			ecrire ("deux solutions : x1 = ", (-b+sqrt(delta))/2*a , "x2 = ", (-b-sqrt(delta))/2*a) 
		finsi	
	sinon 
		ecrire ("a ne peut pas être égal à 0")
	finsi
Fin
