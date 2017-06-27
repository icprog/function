#include "stdio.h"

//循环
/*
int factor(int num)
{
	
	int count,value = 1;
	if(num < 0)
		return 0;
	else if(0 == num)
		return 1;
	else
	{
		for(count = 1;count  <= num; count++)
		{
			value = value * count;
		}
	}
	
	
	return value;
} 
*/
//递归
// int factor(int num)
// {
	// int ans;
	// if(num > 1)
		// ans = num*factor(num-1);
	// else
		// ans = 1;
	// return ans;
// }

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
		printf("%d\n",factor(x));
		printf("Enter a integers (q to quit):\n");
	}
	
	return 0;
}