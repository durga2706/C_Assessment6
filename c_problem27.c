#include<stdio.h>
int main()
{
    int n=1;
    int temp,digit,sum;
    int count=0;
    while(n<100000)
    {
        temp=n;
        sum=0;
        while(temp>0)
        {
            digit=temp%10;
            sum=sum+digit;
            temp=temp/10;
        }
        if(sum==14)
        {
            count++;
        }
        n++;
    }
    printf("%d",count);
    return 0;
}
