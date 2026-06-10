#include<stdio.h>
int main()
{
    int n,temp,p=1;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp>=10)
    {
        temp=temp/10;
        p=p*10;
    }
    if(temp%2!=0)
        n=n-p;
    printf("%d",n);
    return 0;
}
