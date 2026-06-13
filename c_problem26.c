#include<stdio.h>
int main()
{
    int a;
    a=9999;
    while(a>=1000)
    {
        if(a%7==0)
        {
            if(a%9==0)
            {
                printf("%d",a);
                return 0;
            }
        }
        a=a-1;
    }
}
