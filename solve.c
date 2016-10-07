#include <stdio.h>
#include <string.h>

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

	return numparen;
}
int getterms(char *inputexp) {
	for ( int i=0; i<strlen(inputexp); i++ ) {
		if (inputexp[i]=='+'){
			char dest[strlen(inputexp)];
			strncpy(dest, inputexp, i);
			dest[i] = '\0';
			if 	(fullparen(dest)==0) {
				printf("Hello");
			}
		}	
	}
}
int main(void) {
	char source[] = "1(+(x-1)^2)";
	getterms(source);
	return 0;
}
