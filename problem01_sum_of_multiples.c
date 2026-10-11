// Calculate the sum of multiples of 3 from 1 to 50.
#include <stdio.h>
int main()
{
    int i,sum=0;
    for(i=3;i<=50;i=i+3)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
