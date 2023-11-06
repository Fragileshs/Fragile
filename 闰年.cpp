#include <stdio.h>
int main(){
	int a;
    printf("请输入年份：") ; 
	scanf("%d",&a);
	if(a<=0){
	    printf("年份不符合要求");
    }
	else{
		if(a%4==0&&a%100!=0||a%400==0)
	      printf("闰年");
	    else
	      printf("平年");
	}     
	return 0 ;
} 
