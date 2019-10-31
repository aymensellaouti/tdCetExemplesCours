remplirTab(E: tab: Tableau[1..N] de entier, n: entier)
var 
	i : entier
debut
	pour i <- 1 à n faire
		ecrire ("donner l'entier numero ", i , " :")
		lire(tab[i])
	finPour
Fin

afficherTab(E: tab: Tableau[1..N] de entier, n: entier)
var 
	i : entier
debut
	pour i <- 1 à n faire
		ecrire ("tab[", i, "] = ", tab[i]) // tab[1] = val1
	finPour
Fin

