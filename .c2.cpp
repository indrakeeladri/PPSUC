#include<stdio.h>
int main()
{
	int n;
	printf("enter the values");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("monday");
		break;
		case 2:printf("tuseday");
		break;
		case 3:printf("wednesday");
		break;
		case 4:printf("thursday");
		break;
		case 5:printf("fraiday");
		break;
		case 6:printf("saturday");
		break;
		case 7:printf("sunday");
		break;
		default:printf("invaliad day");
		break;
	}
	return 0;
}
