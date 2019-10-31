/*
 fonction rechercheDansTab(t : Tableau[1..N] entier, n : entier, val : entier) : entier
 var 
 	i : entier
 debut
 	i <- 1
 	tantque (i <= n ) faire 
 		si (t[i] = val) alors 
 			retourner (i)
 		finsi
 		i <- i + 1
 	fintantque
 	retourner(-1);
 Fin
 
 1 2 3 4 5 6 7 8 9 10
 
 fonction rechercheDicho(t : Tableau[1..N] entier, n : entier, val : entier) : entier
 var 
 	m , binf , bsup 
 debut
 binf <- 1
 bsup <- n
 
 tantque(binf <= bsup) faire
 	m <- (binf + bsup/2
 	si (t[m] = val) alors 
 		retourner (m)
 	sinon si (t[m] > val) alors
 		bsup <- m - 1
 	sinon 
 		binf <- m + 1
 	finsi
 fintantque
 	retourner (-1);
 fin
 */
