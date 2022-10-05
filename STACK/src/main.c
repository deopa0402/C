#include <stdio.h>
#define STACK_SIZE 5
int stack[STACK_SIZE] = {0,};
int top = -1;
void PUSH(int value){
    if (top>=STACK_SIZE-1){
        printf("stack overflow\n");
    }
    else
    stack[++top]=value;
}
int POP(){
    if (top==-1){
        printf("stack underflow\n");
        return false;
    }
    else{
        printf("POP=>%d\n",stack[top]);
        top--;
    }
}
int PEEK(){
    if (top==-1){
        printf("stack underflow\n"); return false;
    }
    else return stack[top];
}
void PRINT(){
    for(int i=top; i>=0; i--){
        printf("stack[%d]=%d\n", i, stack[i]);
    }
}
int main(void){
        PUSH(1);    PUSH(2);    PUSH(3);    PUSH(4);    PUSH(5);
        PRINT();
        PUSH(6);
        PRINT();
        POP();
        PEEK();
        PUSH(4);
        PRINT();
}