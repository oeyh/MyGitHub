#include <stdio.h>

void foo();

int main()
{
    for (int i = 0; i < 5; ++i) {
        foo();
    }
}

void foo() {
    // static int count = 0;
    int count = 0;
    printf("%d ", count++);
}