#include<stdio.h>
void main()
{
int n,x,p,i,j=1;
printf("\n Enter the n value:");
scanf("%d",&n);
printf("\n Enter the pair");
scanf("%d",&p);
for(i=0;i<2*n;i++)
{
x=2*n-i;
if(p!=x)
{
printf("The pair is %d for days %d is %d\n",p,j++,p);
}
}
}
