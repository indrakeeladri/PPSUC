#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,f=0;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%1==0)
		f++;
	}
	if(f==2)
	printf("%d is prime",n);
	else
	printf("%d is not prime",n);
	return 0;
}
