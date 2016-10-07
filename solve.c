#include <stdio.h>
#include <string.h>
int getterms(char *inputexp) {
	for ( int i=0; i<strlen(inputexp); i++ ) {
		if (inputexp[i]=='+'){
			if 	
		}	
	}
}
int fullparen(char *inputexp) {
	int numparen = 0;
	for ( int i=0; i<strlen(inputexp); i++ ) {
	   	if (inputexp[i]=='(') {
	   		numparen++;
	   	}
	   	else if (inputexp[i]==')') {
	   		numparen--;
	   	}
	}
	printf("%d",numparen);
	return numparen;
}
int main(void) {
	char source[] = "1+(x-1)^2";
	fullparen(source);
	return 0;
}
