#include "stdio.h"
#include "hotel.h"
#include "math.h"
int main(void)
{
	int hotel,days,i;
	float price;
	printf("please input hotel and days(q to quit)\n");
	while(scanf("%d,%d",&hotel,&days) == 2)
	{
		for(i=0;i<days;i++)
		{
			switch(hotel)
			{
				case hotel1:
					price = hprice1 + price * pow(0.95,i); 
					break;
				case hotel2:
					price = hprice2 + price * pow(0.95,i); 
					break;
				case hotel3:
					price = hprice3 + price * pow(0.95,i); 
					break;
				case hotel4:
					price = hprice4 + price * pow(0.95,i); 
					break;
				default :
					printf("please input right hetel\n");
					break;
			}
		}
		printf("the all of price = %f\n",price);	
		printf("please input hotel and days(q to quit)\n");
	}
	printf("Bye");
	return 0;
}