

Algorithme ChoixIteration

si (nombreIteration est connu) alors 
	iteration deterministe 
		Les boucles Pour 
			Pour compteur <- borneInf � borneSup
				BlocInstructions
			FinPour	 
			
			Exemple : 
			Pour i<-1 � 3 (pas = 2)  
				ecrire (i)
			FinPour 
			
			1�re iteration i = 1 
					ecrire (1)
					i <- i+2 // i = 3
			2�me iteration i = 3
					ecrire (3)
					i <- i+1 // i = 3
			FinPour 
			
			Pour i<-3 � 1 (pas = -1)  
				ecrire (i)
			FinPour 
			
			1�re iteration i = 3 
					ecrire (3)
					i <- i-1 // i = 2
			2�me iteration i = 2
					ecrire (2)
					i <- i-1 // i = 3
					
			3�me iteration i = 1
					ecrire (1)
					i <- i+1 // i = 3
			
else 
	// Au minimum on a 0 it�ration
	si (on veut au minimum ex�cuter 0 fois notre bloc)
		tanque (condition pour rester dans la boucle) faire
			Bloc iterations
		finTanque
		//exemple 
		// n = 7
		tanque(n>0) alors
			ecrire(n Mod 2)
			n <- n div 2
		fintanuqe
		//1 �re iteration ecrire(7 mod 2 ) ecrire (1) , n = n div 2 = 3
		//2 �me iteration ecrire (3 mod 2 ) ecrire (1) , n = ndiv 2 = 1
		//3 �me it�ration ecrire (1 mod 2 ) ecrire (1) , n = n div 2 = 0
		//Sortir de la boucle parce que n n'est plus > 0    			
	// Au minimum 1 iteration
	
	sinon
		repeter 
			Bloc iterations
		jusqu'� (condition de fin)		
	finsi
		//exemple
		// lire une note qui doit etre entre 0 et 20
		repeter
			lire(note)
		jusqu'� (note >=0 et note <=20)
FinSi		
