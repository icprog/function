#include "stdio.h"
unsigned long Fibonaci(unsigned n)
{
	long ans;
	if(n>2)
		ans = Fibonaci(n-1)+Fibonaci(n-2);
	else
		ans = 1;
	return ans;
}
int main(void)
{
	int x;
	printf("Enter a integers (q to quit):\n");
	while((scanf("%d",&x)==1))
	{
		printf("%d\n",Fibonaci(x));
		printf("Enter a integers (q to quit):\n");
	}
	
	return 0;
}