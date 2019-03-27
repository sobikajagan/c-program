#include <stdio.h>
#include<string.h>

int main(void) {

int a,b,i,l,n;
scanf("%d\t%d",&a,&b);
char a1[100],b1[100],j;
sprintf(a1,"%d",a);
sprintf(b1,"%d",b);
strcat(a1,b1);
//printf("%s",a1);
l=strlen(a1);
//printf("%d",l);
for(i=0;i<l;i++)
{
  for(n=i+1;n<l;n++)
  {
   if(a1[i]>a1[n])
   {
    j=a1[i];
    a1[i]=a1[n];
    a1[n]=j;
   }
  }
}
printf("%s",a1);
  return 0;
}
