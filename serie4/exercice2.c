
procedure sousSequence(
		E: t: Tableau[1..n] entier
		S: indFinPGS, nbSequence, indDebutPGS:entier)
var
	tailleSeq, indSeqCour, i, taillePlusGrandeSeq : entier
debut
	tailleSeq<-1
	taillePlusGrandeSeq<-1
	indDebutPGS<-1
	nbSequence <- 0
	indSeqCour <- 1
	
	pour(i<-1 à n-1) faire
		si(t[i]<= t[i+1]) alors
			tailleSeq<- tailleSeq + 1
		sinon
			nbSequence <- nbSequence + 1
			si (tailleSeq > taillePlusGrandeSeq) alors
				taillePlusGrandeSeq <- tailleSeq
				indDebutPGS<- indSeqCour	
			finsi
			indSeqCour <- i+1
			tailleSeq  <- 1
		finsi	
	finPour
				nbSequence <- nbSequence + 1
			si (tailleSeq > taillePlusGrandeSeq) alors
				taillePlusGrandeSeq <- tailleSeq
				indDebutPGS<- indSeqCour	
			finsi
			indSeqCour <- i+1
			tailleSeq  <- 1
	indFinPGS <- indDebutPGS + taillePlusGrandeSeq - 1
fin	
	
	
	

