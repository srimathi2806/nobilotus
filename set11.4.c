#include <stdio.h>
int main() 
{
    int a,i,n,pro=1;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
     pro=pro*a;
    }
    printf("%d",pro);
	
}
