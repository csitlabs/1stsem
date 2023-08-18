// LAB 4: WAP that demonstrate the relationship between string and pointer.

#include <stdio.h>
int main() {
	char str[6] = "Hello";		 // string variable-Hello\0
	char *ptr = str; 		// pointer variable
	// print the string
	while(*ptr != '\0') {
		 printf("%c", *ptr);
 		 ptr++;			// move the ptr pointer to the next memory location
	}
	return 0;
}
