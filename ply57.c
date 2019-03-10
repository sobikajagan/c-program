#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
char a[10],b;
int i,j,l,k=0;
scanf("%s\t%c",a,&b);
l=strlen(a);
for(i=0;i<=l;i++)
{
  if(a[i]==b)
  {
   k=k+1;

  }
}
printf("%d",k);
return 0;
}
