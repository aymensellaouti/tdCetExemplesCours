int exist(Sportif* t, int n, int numero) {
	int i=0;
	for (i=0; i<n; i++) {
		if(t[i].numero == numero) {
			return 1;
		}
	}
	return 0;
}
void biDiscipline(Sportif* t1, int n1, Sportif* t2, int n2, Sportif* t3, int* n3) {
	int i=0;
	
	for (i=0,*n3=0; i<n1; i++) {
		if(exist(t2,n2,t1[i].numero)) {
			t3[*n3]=t1[i];
			*n3 = *n3 + 1;
		}
	}
}
