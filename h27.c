#include<stdio.h>
#include<string.h>
int main()
{
int n,i,k=0;
  char a[100],t[100];
  scanf("%[^\n]%*c",&a);
  strcpy(t,a);
  printf("%s",t);
  printf("\n");
  n=strlen(t);
  for(i=n;i>=0;i--)
  {
 
    printf("%c",t[i]);
   
  }
   printf("\n");
    if(a==t[i])
    {
      printf("\n");
      for(i=0;i<n-2;i++)
      {

      
      printf("%c",a[i]);
      }
    }
    else
    {
      printf("%s",t);
    }
 return 0;
}
