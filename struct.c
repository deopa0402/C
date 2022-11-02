#include <stdio.h>
struct employee
{
    char name[10];
    int year;
    int pay;
};
int main(void) {
    struct employee ho={"한재범",2014,4200};
    printf("이름: %s\n",ho.name);
    printf("이름: %d\n",ho.year);
    printf("이름: %d\n\n",ho.pay);

    struct employee ko={"재범한",2015,3300};
    printf("이름: %s\n",ko.name);
    printf("이름: %d\n",ko.year);
    printf("이름: %d\n\n",ko.pay);

    struct employee one={"범재한",2015,3500};
    printf("이름: %s\n",one.name);
    printf("이름: %d\n",one.year);
    printf("이름: %d\n\n",one.pay);
    
    struct employee ban={"범한재",2016,2900};
    printf("이름: %s\n",ban.name);
    printf("이름: %d\n",ban.year);
    printf("이름: %d\n\n",ban.pay);
}