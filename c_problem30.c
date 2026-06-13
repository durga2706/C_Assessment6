#include<stdio.h>
int main()
{
    int num1,num2,hcf,smaller;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    if(num1<num2)
    {
        smaller=num1;
    }
    else
    {
        smaller=num2;
    }

    hcf=smaller;
    while(hcf>=1)
    {
        if(num1 % hcf==0)
        {
            if(num2%hcf==0)
            {
                printf("%d",hcf);
                break;
            }
        }
        hcf=hcf-1;
    }
    return 0;
}
