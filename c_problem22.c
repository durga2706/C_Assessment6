#include<stdio.h>
int main()
{
    int n;
    int a,b,num;
    int count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>=10)
    {
        a=n%10;
        b=(n/10)%10;
        num=b*10+a;
        if(num%2!=0)
        {
            count++;
        }

        n=n/10;
    }
    printf("%d",count);
    return 0;
}
