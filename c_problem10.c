#include<stdio.h>
int main()
{
    int n,tens,sum=0;
    n=10;
    while(n<=99)
    {
        tens=n/10;
        if((tens==7)&&(n%2!=0))
        {
           sum=sum+n;
        }
        n++;
    }
    printf("%d\n",sum); 
    return 0;
}
