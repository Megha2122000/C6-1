//6-1

#include<stdio.h>
int main()
{
	int num , sum;
	printf("Enter any number to find sum of digits: \n\n");
	scanf("%d" , &num);
	sum = sod(num);
	printf("sum of digits of %d = %d" , num  , sum);
	return 0;
}
int sod(int num)
{
	if(num == 0)
	return 0;
	return(num%10 + sod(num/10));
}
