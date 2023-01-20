#include<stdio.h>
main()
{
	int location;
	printf("Enter Location");
	scanf("%d",&location);
	

	
	int array[5] = {4,5,7,9};
	
	
	for(int a = location;a<4;a++)
	{
		array[location]= array[location+1];
	}
	
	for(int i = 0;i<3;i++)
	{
		printf("%d,",array[i]);
	}
	
	
	
	
	
	
	
}
