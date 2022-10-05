#include <stdio.h>
int aaa(int a); //함수 원형 선언//

int main(void)
{
	int i, j;                                       
	
	printf("   구구단\n");
	printf("원하는 단을 입력하세요.:");
	scanf("%d",&i);
	printf("\n");
	printf("    %d단 \n",i);
	
	j=aaa(i); /*함수 불러 오기.*/
	printf("\n");
	printf("%d단의 결과값의 합은 %d입니다.\n",i,j);
	
	return 0;
	
}

int aaa(int a)
{
	int b,c=0,d;
	
	for(b=1; b<=9; b++)
	{
		d=a*b;
		printf(" %d * %d = %d\n",a,b,d);
		c=c+d;
	}
	
	return c;
}