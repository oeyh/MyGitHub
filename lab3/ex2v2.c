#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *str = malloc(15 * sizeof(char));
	strcpy(str, "hakuna matata!"); // this line should copy "hakuna matata!"
	                         // into our char array
	printf("%s\n", str);
    
    free(str);
    
	// Anything else?
    return 0;
}