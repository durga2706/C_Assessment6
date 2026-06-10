#include<stdio.h>
int main()
{
    int n,temp,first,last,count=0;
    int p=1,middle,result;
    printf("Enter a number:");
    scanf("%d",&n);
    last=n%10;
    temp=n;
    while(temp>=10)
    {
        temp=temp/10;
        count++;
        p=p*10;
    }
    first=temp;
    middle=(n%p)/10;
    result=last*p+middle*10+first;
    printf("Result = %d",result);
    return 0;
}
