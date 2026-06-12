#include<stdio.h>
int main()
{
    int n,num,i=1,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    num=n%100;
    while(i<=num)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}
