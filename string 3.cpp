#include <stdio.h>
#include <string.h>
int main()
{
	char a[10]="cse",b[10]="ADITYA";
	printf("a sting length is:%d\n",strlen(a));
	printf("a string revers is:%s\n",strrev(a));
	printf("a sring is uppercse is:%s\n",strupr(a));
	printf("b string in lowercase is:%s\n",strlwr(b));
	printf("string copy is:%d\n",strcpy(a,b));
	printf("string concat is:%s\n",strcat(a,b));
	printf("string compare is:%d",strcmp(a,b));
	return 0;
}
