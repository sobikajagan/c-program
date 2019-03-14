#include <stdio.h>
#include<string.h>
int main(void) {
char a[100],b[100];
int l,i,n,j;
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
  if(a[i]!='a' && a[i]!='e'&& a[i]!='i' && a[i]!='o'&&a[i]!='u')
  {
     b[i]=a[i];
   
  }
  else
  {
     printf("%c",a[i]);
  }
}
for(i=0;i<l;i++)
{
  if(a[i]!='a' && a[i]!='e'&& a[i]!='i' && a[i]!='o'&&a[i]!='u')
  {
     printf("%c",a[i]);
  }
}


  return 0;
}
