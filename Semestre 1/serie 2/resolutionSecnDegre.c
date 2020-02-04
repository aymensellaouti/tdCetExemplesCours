Algorithme resolutionSecondDegre
var
a,b,c,delta :reel
debut
	ecrire("donner les trois coeffs a,b et c")
	lire (a,b,c)
	si (a = 0) alors 
		ecrire ("erreur a null :x")
	sinon 
		delta <- b*b - (4 *a * c)
		si (delta < 0 ) alors 
			ecrire("Pas de solution")
		sinon si (delta = 0) alors
			ecrire ("solution double x = ", -b / (2*a))
		sinon 
			ecrire ("deux solutions x1 = ", (-b - sqrt(delta))/(2*a), " x2 = ", (-b + sqrt(delta))/(2*a))
		finsi 
	finsi
fin


