#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
char a[10],b;
int i,j,l;
scanf("%s\t%c",a,&b);
l=strlen(a);
for(i=0;i<=l;i++)
{
  if(a[i]==b)
  {
   
    printf("%d",i+1);
     break;
  }
}
return 0;
}
