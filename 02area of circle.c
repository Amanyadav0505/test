#include <stdio.h>
// find area of circle
#define PI 3.14
int main(){
	float radious;

		printf("enter the radious:");
	scanf("%f",&radious);
	printf("the area of circle of : %.2f",PI*radious*radious);

	return 0;
}