#include <stdio.h>
int main()
{
    int n;
    int hundred,ten;
    int num;
    int i, count=0;
    printf("Enter a 4 digit number:");
    scanf("%d",&n);
    hundred=(n/100)%10;
    ten=(n/10)%10;
    num=hundred*10+ten;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
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
