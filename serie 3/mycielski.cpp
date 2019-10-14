
fonction Mycielski (n : entier) : entier
var
m, c, i : entier
debut
	c <- 1
	m <-2
	
	pour i<-2 à n faire
		c <- 3*c + m
		m <- 2*m + 1
	finPour
	retourner (c)
fin
	
