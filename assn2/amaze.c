// seven different ways to print the odd numbers 
// between 0 and 10 on a single line. 

#include <stdio.h>

void amaze1();
void amaze2();
void amaze3();
void amaze4();
void amaze5();
void amaze6();
void amaze7();
void amazeWOW();

int main(int argc, char ** argv)
{
    amaze1();
    amaze2();
    amaze3();
    amaze4();
    amaze5();
    amaze6();
    amaze7();
    amazeWOW();
    return 0;    
}

void amazeWOW()
{
	int i;
	printf("amazeWOW:\t");
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

// direct way
void amaze1()
{
    int i, num[5] = {1, 3, 5, 7, 9};
    printf("amaze1:\t\t");
    for (i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    
}

// a more direct way
void amaze2()
{
    int i;
    printf("amaze2:\t\t");
    for (i = 1; i <= 10; i = i + 2) {
        printf("%d ", i);
    }
    printf("\n");
}

//while 
void amaze3()
{
    int i = 0;
    printf("amaze3:\t\t");
    while (i <= 10) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
}

// using do while
void amaze4()
{
    int i = 0;
    printf("amaze4:\t\t");
    do {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
        i++;
    } while (i <= 10);
    printf("\n");
}

// using goto
void amaze5()
{
    int i = 0;
    printf("amaze5:\t\t");
    start:
    if (i <= 10) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
        i++;
        goto start;        
    }
    printf("\n");
    
}

// using switch instead of if 
void amaze6()
{
    int i = 0;
    printf("amaze6:\t\t");
    while (i <= 10) {
        switch(i % 2) {
            case(1): 
                printf("%d ", i);
                i++;
                break;
            default:
                i++;
                break;
        }
    }
    printf("\n");
}

// the last way I can think of 
void amaze7()
{
    printf("amaze7:\t\t");
    printf("1 3 5 7 9\n");
}



















