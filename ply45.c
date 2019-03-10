#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
int p,a,pp,aa,f=0,i,j;
scanf("%d\t%d",&p,&a);
for(i=0;i<p;i++)
{
  for(j=0;j<p;j++)

  {
    pp=2*(i+j);
    aa=i*j;
    if(p==pp&&a==aa)
    {
      f=1;
    }
  }
}
if(f==1)
printf("yes");
else 
printf("no");
return 0;
}
