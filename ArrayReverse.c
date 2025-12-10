//Printing Array elements in Reverse order through Pointers
#include<stdio.h>
int main(void)
{
	int arr[5], i;
	int* ptr;
	//Reading elements into the array through pointer
	ptr = arr;
	printf("Enter 5-elements:\n");
	for(i=0;i<5;i++)
	   scanf("%d", ptr+i);
	//Printing the array elements in reverse order
	ptr = &arr[4];
	printf("\nElements in the array (Reverse order):\n");
	for(i=0;i<5;i++)
	   printf("%d ",*(ptr -i));
}
