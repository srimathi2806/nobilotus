#include<stdio.h>
#include<conio.h>
void main()
{
int a,i=0,j,k,temp,rem,b[100];
clrscr();
scanf("%d",&a);
  while(a!=0)
  {
    rem=a%10;
    b[i]=rem;
    i++;
    a=a/10;
  }
  for(j=0;j<i;j++)
{
for(k=j+1;k<i;k++)
{
if(b[j]>b[k])
{
temp=b[k];
b[j]=b[k];
b[k]=temp;
}
}
}
 for(j=0;j<i;j++)
 {
    printf("%d",b[j]);
 }
  return 0;
}
