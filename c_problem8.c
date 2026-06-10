#include <stdio.h>
int main()
{
    int n,tens,ones;
    n=10;
    while(n<=99)
    {
        tens=n/10;
        ones=n%10;
        if((tens+ones==6)&&(n%2==0))
        {
            printf("%d\n",n);
        }
        n++;
    }
    return 0;
}
