#include <stdio.h>

int all_letters(char *s){

	while(*s){ // while pointer is pointing at non-null char
		if( (*s <= 90 && *s >= 65) || (*s <= 122 && *s >= 97) ){ // Upper case or lower case (ASCII values)
			s++; // advance to next char
		}
		else{ // not a letter
			return 0;
		}
	}
	return 1;
}