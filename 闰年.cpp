#include <stdio.h>
int main()
{	int a;
    printf("��������ݣ�") ; 
	scanf("%d",&a);
	if (a%4==0&&a%100!=0||a%400==0)
	    printf("����");
	else
	    printf("ƽ��");
	return 0 ;
} 
