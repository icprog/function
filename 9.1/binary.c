#include "stdio.h"
void binary(unsigned int n)
{
	unsigned int a;
	a = n%2;
	if(n >= 2)
	{
		binary(n/2);
	}
	printf("%d",a);


}
int main(void)
{
	int x;
	printf("Enter a integers (q to quit):\n");
	while(scanf("%d",&x)==1)
	{
		binary(x);
		printf("\nEnter a integers (q to quit):\n");
	}
	
	return 0;
}