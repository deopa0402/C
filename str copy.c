#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee {
    char name[10];
    int year;
    int pay;

};

int main(void) {
    struct employee lee = { "이진호", 2014, 4200};
    struct employee *p = &lee;
    strcpy(p->name,"이순신");
    p->year = 2015;
    p->pay = 5000;

    printf("이름: %s \n", lee.name);
    printf("입사: %d \n", lee.year);
    printf("연봉: %d \n", lee.pay);

    printf("##################################################\n");
    struct employee *sptr = (struct employee*)malloc(sizeof(struct employee));
    strcpy(sptr->name, "이한");
    sptr->year = 2022;
    sptr->pay = 8000;

    printf("이름: %s \n", sptr->name);
    printf("입사: %d \n", sptr->year);
    printf("연봉: %d \n", sptr->pay);
}