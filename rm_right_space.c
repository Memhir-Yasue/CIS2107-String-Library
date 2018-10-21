#include <stdio.h>

int length(char *s){
	int len = 0;
	while(*s){
		len++;
		s++;
	}
	printf("%d\n",len );
	return len;
}

void rm_right_space(char *s){
	int index = 0;
	int len = length(s); // count length of array
	while(s[len - 1] == ' '){ // while last index is white-space
		s[len - 1] = '\0'; // truncate it
		len-=1; // decrese length 
	}
	
}
