#include <stdio.h>

int len_diff(char *s1, char *s2){
	int lenS1 = 0;
	int lenS2 = 0;
	while(*s1){ // while pointer is not a null char
		lenS1++;
		s1++;
	}
	while(*s2){
		lenS2++;
		s2++;
	}
	int diff = lenS1 - lenS2;
	return diff;
	
}
