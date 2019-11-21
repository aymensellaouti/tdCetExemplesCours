#include<stdio.h>
#include<string.h>
int main() {
	char s[20] = "Test"; 
//	s[0] = '\0';
	printf("*%s*", s);
	printf("%d %d", 'A', 'B');
	// a b c ... z, A B ... Z 0 1 .. 9
	//ascii (a) = x => ascii(b) = x+1
}
