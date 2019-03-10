#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
char a[10],b[10];
int i,j,l,m,f=0;
scanf("%s\t%s",a,b);
l=strlen(a);
m=strlen(b);
if(l==m)
{
  for(i=0;i<l;i++)
  {
    if( a[i]==b[i])
    {
     f=0;
    }
    else
    {
     f=1;
     break;
    }
  }
}
if(f==1)
  printf("yes");   
else
  printf("no");
return 0;
}
