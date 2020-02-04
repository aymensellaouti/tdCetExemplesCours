// f attend que g et h se termine 
// f(3) => printf(3) f(2) (en attente de f(2))
// f(2) => printf(2) f(1)(en attente de f(1))
// f(1) => printf(1) f(0)(en attente de f(0))
// f(0) // rien
void f(int x) {
	if (x) {
		f(x-1);
		printf("%d\n", x);
	}
}
void transfertBase(int x, int b) {
	if(x < b) {
		printf("%d",x);
	} else {
		transfertBase(x/b, b);
		printf("%d", x%b);
	}
}

int longeur(char* s){
	if (!chVide(s)) {
		return 1 + longeur(debut(s));
	}
	return 0;
}

void longeur1(char* s, int* x){
	if (!chVide(s)) {
		longeur(debut(s,x));
		*x = *x + 1;
	} else {
		*x = 0;
	}	
}

int estExtraite(char*s1 , char*s2) {
	if (!longeur(s1)) {
		return 1;
	}
	if (!(longeur(s2))) {
		return 0;
	}
	if(dernier(s1) == dernier(s2)){
		return (estExtraite(debut(s1), debut(s2)));
	return(estExtraite(s1, debut(s2)));	
	}
}
int main() {
	transfertBase(4,2);
}	


    
