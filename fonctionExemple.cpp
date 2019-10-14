Algorithme sommeFact

fonction factoriel (n : entier) : entier
var 
i, fact : entier
debut
	fact <-1
	Pour i <- 2 à n faire
		fact <- fact * i
	finPour
	retourner fact
debut
fin 

var 
entier n, m 
debut

ecrire("donner un entier")
lire(n)
ecrire("donner un autre entier")
lire(m)

ecrire ("somme des deux factoriel  = ", factoriel(n) + factoriel(m))
fin

