#include <stdlib.h>
#include <stdio.h>
 
void fn()
{
	int* x = malloc(10 * sizeof(int));
	x[9] = 0;
    printf("%d",*(x+9));
    free(x);
}
 
int main()
{
	fn();
	return 0;
}