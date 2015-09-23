#include <stdio.h>
#include <stdlib.h>

int main()
{
    // what if I allocate more memory than it needs
    int *age = malloc(2*sizeof(int));
    *age = 3;
    printf("%d\n", *age);
    return 0;
}