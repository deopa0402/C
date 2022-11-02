#include <stdio.h>
#define STACK_SIZE 5

int stack[STACK_SIZE] = {0,};
int top = -1;

void PUSH(int value){
    if (top >= STACK_SIZE -1){
        printf("STACK OVERFLOW\n");
        return;
    }
    else
        stack[++top] = value;
}

void POP(){
    if (top == -1){
        printf("STACK UNDERFLOW\n");
        return;
    }
    else{
        printf("POP => %d\n", stack[top--]);
    }
}

int PEEK(){
    if (top == -1){
        printf("STACK UNDERFLOW\n");
        return 0;
    }
    else {
        return stack[top];
    }
}

void PRINT(int value){
    for(value = top; value >= 0; value--){
        printf("stack[%d] = %d\n", value, stack[value]);
    }
}s

 int main(){
    PUSH(1); PUSH(2); PUSH(3);
    PRINT(1);
}