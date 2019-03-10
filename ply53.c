#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
char a[10];
int l,n=0,i,j;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
  n=n+1;
}
printf("%d",n);
return 0;
}
