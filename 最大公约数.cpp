#include <stdio.h>
int main(){
	int u ;
	int v ;
	printf("请输入其中一个数："); 
	scanf("%d",&u);
	printf("请输入另一个数："); 
	scanf("%d",&v);
	while(v!=0){
		int temp = u%v;
		u = v;
		v = temp;
	}
	printf("它们的最大公约数为%d",u);
	return 0;
}
