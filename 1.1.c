#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=0,b=1,c,i=3;
    scanf("%d",&n);
    printf("%d elements of fibonacci series are ",n);
    if(n==1)
        printf("%d",a);
    else if(n==2)
            printf("%d %d",a,b);
    else
    {
        printf("%d %d ",a,b);
        while(i<=n)
        {
           c=a+b;
           a=b;
           b=c;
           printf("%d ",c);
           i++;
        }
    }


    return 0;
}
