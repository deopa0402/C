#include <stdio.h>

int max(int a, int b){
    if(a > b)
    return a;
    else
    return b;
}
int main(void){
    int a=5, b=3, result;

    result = max(a, b);
    printf(" 큰수 = %d \n" , result);
}