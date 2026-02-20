#include <stdio.h>
#include <math.h>
int main()
{
	float sugar;
	printf("Add meg a kör sugarát: ");
	scanf("%f",&sugar);
	float kerulet=2*sugar*M_PI;
	float terulet=sugar*sugar*M_PI;
	printf("A kör kerülete: %f\n",kerulet);
	printf("A kör területe: %f\n",terulet);
	return 0;
}
