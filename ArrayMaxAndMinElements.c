//Program for finding maximum and minimum of array elements
#include<stdio.h>
int main(void)
{
	int arr[5], i, min, max;
	printf("Enter any 5-elements into the array:");
	for(i=0; i<5; i++)
	 scanf("%d",&arr[i]);
	min=max=arr[0];
	for(i=1; i<5; i++)
	{
		if(arr[i]<min) min=arr[i];
		if(arr[i]>max) max=arr[i];
	}
	printf("\nMinimum value in the array:%d",min);
	printf("\nMaximum value in the array:%d",max);
}
