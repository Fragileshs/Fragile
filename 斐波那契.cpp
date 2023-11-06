#include <stdio.h>
int main(){
	int x;
	scanf("%d",&x); 
	int array[x + 2];
	int index = 0;
	array[0] = 1;
	array[1] = 1;
	for(index = 2; index < x + 2 ; index++){
		array[index] = array[index - 1] + array[index - 2];
		printf("%d\n",array[index - 2]);
	}
	return 0;
} 
