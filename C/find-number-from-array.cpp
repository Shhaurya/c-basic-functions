#include<stdio.h>
main()
{
	int number;
	int rr=0;
	int ss=0;
	printf("Enter Number");
	scanf("%d",&number);
	
int array[5] = {10,20,30,40,50};
for( int a=0;a<5;a=a+1)
{
	if(number!=array[a])
	{
		rr = rr+1;
	}
	else{
		ss=rr;
	}
}
printf("the position is %d",ss);

	
	
	
	
}
