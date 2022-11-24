#include <stdio.h>
struct health
{
    int no;
    float height;
    float weight;
    int time;
};

int main(void) {
    struct health one={1,182.8,75.3,3};
    printf("%d번\n",one.no);
    printf("%fcm\n",one.height);
    printf("%fcm\n",one.weight);
    printf("주%d회\n",one.time);
    if (one.time >= 3)
    {
        printf("건강상태 양호\n\n");
    }
    else printf("건강상태 주의\n\n");

    struct health two={2,157.2,62.1,0};
    printf("%d번\n",two.no);
    printf("%fcm\n",two.height);
    printf("%fcm\n",two.weight);
    printf("주%d회\n\n",two.time);
    if (one.time >= 3)
    {
        printf("건강상태 양호\n\n");
    }
    else printf("건강상태 주의\n\n");

    struct health ther={3,173.5,53.8,2};
    printf("%d번\n",ther.no);
    printf("%fcm\n",ther.height);
    printf("%fcm\n",ther.weight);
    printf("주%d회\n\n",ther.time);
    if (one.time >= 3)
    {
        printf("건강상태 양호\n\n");
    }
    else printf("건강상태 주의\n\n");
}