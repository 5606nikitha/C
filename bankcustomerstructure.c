#include<stdio.h>
struct CUSTOMER
{
	int acc_no;
	char name[30];
	float balance;
};
void low_balance(struct CUSTOMER C[], int n)
{
	int i;
	printf("\ncustomers with balance below 1000:\n");
	for(i=0;i<n;i++)
  {
	if(C[i].balance<1000)
	{
		printf("Account No:%d\n",C[i].acc_no);
		printf("Name :%s\n\n", C[i].name);
	}
  }
}
int main()
{
	struct CUSTOMER C[50];
	int n,i;
	printf("Enter the number of customers(max 50): ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the details of customer:%d\n",i+1);
		printf("Enter Account Number: ");
		scanf("%d",&C[i].acc_no);
		printf("Enter name: ");
		scanf("%s",C[i].name);
		printf("Enter balance: ");
		scanf("%f",&C[i].balance);
	}
	low_balance(C,n);
	return 0;
}
