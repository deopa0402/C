#include <stdio.h>

void local(int *num) {
    *num = 20;
}
int main(void) {
    int var = 10; 
    local(&var);
    printf("%d\n", var);
}