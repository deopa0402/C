#include <stdio.h>


int main(void) {
    int a = 5;
    char c = 'A';
    int i = 8;
    int *p = &a;
    char *cp = &c;
    
    *p = 30;
    i = *p;
    printf("p=%d \n", p);
    printf("a=%d, i=%d \n", a, i);
    printf("p=%d, *p=%d \n", p, *p);
}