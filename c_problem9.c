#include<stdio.h>
int main()
{
    int n,ones,sum;
    n=10;
    sum=0;
    while(n<=99)
    {
        ones=n%10;
        if(ones==5)
        {
            sum=sum+n;
        }
        n++;
    }
    printf("%d\n",sum);
    return 0;
}
