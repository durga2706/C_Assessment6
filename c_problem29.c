#include<stdio.h>
int main()
{
    int num1,num2,num3,lcm;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    lcm=num1;
    if(num2>lcm)
    {
        lcm=num2;
    }
    if(num3>lcm)
    {
        lcm=num3;
    }
    while(1)
    {
        if(lcm%num1==0)
        {
            if(lcm%num2==0)
            {
                if(lcm%num3==0)
                {
                    printf("%d",lcm);
                    break;
                }
            }
        }
        lcm=lcm+1;
    }

    return 0;
}
