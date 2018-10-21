#include <stdio.h>

int leng(char *s){
	int len = 0;
	while(*s) {
		len++;
		s++;
	}
	return len;
}

void rm_left_space(char *s){
	int len = leng(s);
	while(s[0] == ' '){
		for (int i = 1; i < len; i++)
		{
			s[i - 1] = s[i]; // shift each char from right to left

		}
		s[len - 1] = '\0'; // after each transformation, mark the end of the array. to prevent a leak;
		len--; // length decreases by 1 for every space eleminated
	}
}
