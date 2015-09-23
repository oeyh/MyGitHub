#include <stdio.h>
#define TOTAL 100

// calculate the first 100 triangular numbers

int main()
{
    int i, triangular[TOTAL];
    
    for (i = 0; i < TOTAL; ++i) {
        triangular[i] = (i+1) * (i+2) / 2;
        printf("%d\t", triangular[i]);
    }
    
    
    
    return 0;
}