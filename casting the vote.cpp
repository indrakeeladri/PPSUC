#include <stdio.h>
int main()
{
    int X;

    //input
    scanf("%d",&X);

    //check eligibility
    if (X >= 18)
       printf("YES");
    else
       printf("NO");
    
    return 0;
}
