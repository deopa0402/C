#include <stdio.h>

int main(void) {
    int a = 5;
    char c = 'A';
    int *p = &a;
    char *cp = &c;

    printf("a=%d, a주소=%d \n",a, &a);
    printf("p=%d, p=%d \n",p, *p);
    printf("c=%c, a주소=%d \n",c, &c);
    printf("cp=%d, a주소=%d \n",cp, *cp);

}