#include <stdio.h>
int main(){
	int u ;
	int v ;
	printf("����������һ������"); 
	scanf("%d",&u);
	printf("��������һ������"); 
	scanf("%d",&v);
	while(v!=0){
		int temp = u%v;
		u = v;
		v = temp;
	}
	printf("���ǵ����Լ��Ϊ%d",u);
	return 0;
}
