#include <stdio.h>
int main(){
    float M, N;
	scanf("%f %f",&M,&N);
	float a = M/N;
	int b;
	printf("%f\n",a);
	while(a>1.0){
		a -= 1.0;
	} 
	printf("%f\n",a);
	b = M - (M/N - a) * N;
	printf("%d",b);
	return 0;
}
