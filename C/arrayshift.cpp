#include<stdio.h>
main()
{
	int location;
	printf("Enter Location");
	scanf("%d",&location);
	

	
	int array[5] = {4,5,7,9};
	
	
	for(int a = 3;a<=location;a++)
	{
		array[location-1]= array[location];
	}
	
	for(int i = 0;i<5;i++)
	{
		printf("%d,",array[i]);
	}
	
	
	
	
	
	
	
}
