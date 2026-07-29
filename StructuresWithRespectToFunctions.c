#include<stdio.h>
struct STUDENT
{
	int roll;
	float marks;
};
void display(struct STUDENT s1)
{
	printf("Roll No: %d\n", s1.roll);
	printf("Marks : %f\n", s1.marks);
}
int main(void)
{
	struct STUDENT s1 = { 101, 90.5};
	display(s1);
	return 0;
}
