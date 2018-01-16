#include<stdio.h>
int main()
{
	int i;
	printf("enter a numbet\n");
	scanf("%d",&i);
	if(i>1 && i<100000)
	{
		if(i>0)
		printf("Positive");
	}
	else
	{	if(i==0)
		printf("Zero");
		if(i<0)
		printf("Negative");
	}
	
}
