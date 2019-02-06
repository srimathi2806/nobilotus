#include <stdio.h>
int main() 
{
    int a,i,b,pro,count=1;
    scanf("%d%d",&a,&b);
    i=b;
    while(b!=0)
    {
        b=b/10;
        count=count*10;
    }
    a=a*count;
    pro=a+i;
    printf("%d",pro);
    return 0;
}
