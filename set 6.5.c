#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d",n);
    }
    else if((n+1)%2==0)
    {
        printf("%d",n+1);
    }
    else if((n-1)%2==0)
    {
        printf("%d",n-2);
    }
    return 0;
}
