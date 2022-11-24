#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    char no[10];
    char name[20];
    double  math;
    double  english;
    double  total;
};
struct student2
{
    int no;
    struct score s ;
};

int main(void)
{
    struct student stu1={"20101323", "Park", 80, 80, 0};
    struct student stu2={"20101324", "Kim", 95, 85, 0};
    struct student stu3={"20101325", "Lee", 100, 90, 0};
    
}