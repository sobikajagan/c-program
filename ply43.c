#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int n,l,i,j,c=0;
scanf("%s\t%s",a,b);
n=strlen(a);
l=strlen(b);

for(i=n-l;i<n;i++)
{
  for(j=0;j<l;j++)
  {
  if(a[i]==b[j])
  {
   c=c+1;
  }
  }
}
if(c==l)
{
  printf("yes");
}
else
{
  printf("no");
}
return 0;
}
