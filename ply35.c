#include<stdio.h>
#include<string.h>
int main()
{
 char a[50];
 int i,j,c=0,n=0;
 scanf("%[^\n]s",a);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i]!=a[j])
   {
     c=0;
     break;
   }
  }
  if(c==0)
   printf("%c\t",a[i]);
}
  
 return 0;
 }
 
