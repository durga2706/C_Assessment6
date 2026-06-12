#include <stdio.h>
int main()
{
    int n, temp,sum=0,i,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0)
    {
        sum=sum+(temp%10);
        temp=temp/10;
    }
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2&&sum==14)
    {
        printf("Prime & Sum of digits is 14");
    }
    else if(count!=2&&sum==14)
    {
        printf("Not Prime but Sum of digits is 14");
    }
    else if(count==2&&sum!=14)
    {
        printf("Prime & Sum of digits is not 14");
    }
    else
    {
        printf("Not Prime & Sum of digits is not 14");
    }
    return 0;
}
