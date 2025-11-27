#include <stdio.h>
int main()
  {
    int x,y;
    scanf("%d %d",&x,&y);  //read numaretore and denominator

    //Highest is the maximum of numerator and denominator
    if (x > y)
       printf("%d",x);
    else
       printf("%d",y);
    return 0;
      }
