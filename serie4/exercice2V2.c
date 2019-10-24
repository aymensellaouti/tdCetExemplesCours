

procedure statsTab(
		E: t: Tableau [1..N], n : entier,
		S: nbSequences, debPGS, finPGS
	)
Var
	tailleSeq, taillePGS, i : entier	
debut
	tailleSeq <- 1
	nbSequences <- 0 
	taillePGS<- 1 
	Pour(i<-1 à n) faire
		si (i = n ou t[i] > t[i+1] ) alors
			nbSequences <- nbSequences + 1
			si (tailleSequences > taillePGS) alors
				taillePGS <- tailleSequences
				debPGS <- i - tailleSequences + 1
			finsi 
			tailleSeq <- 1
		sinon
			tailleSeq<- tailleSeq + 1
		finsi
	FinPour	
	finPGS <- debPGS + taillePGS - 1
Fin
