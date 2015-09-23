#include <stdio.h>

int main(int argc, char ** argv){
    
    int i = 1;
    start:
    if (i < argc) {
        printf("%s\n", argv[i]);
        i++;
        goto start;
    }    
    // for (int i = 1; i < argc; i++) {
        // printf("%s\n", argv[i]);
    // }
    return 0;
}