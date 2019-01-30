#include<stdio.h>
#include<string.h>
int main()
{
int n,i,k=0,j;
  char a[100],b[100];
  scanf("%[^\n]%*c",&a);
  
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    b[k]=a[i];
    k++;
  }
  for(i=n;i>=0;i--)
  {
 
    printf("%c",a[i]);
   
  }
   printf("\n");
    if(b[k]==a[i])
    {
      printf("\n");
      for(i=0;i<n-1;i++)
      {

      
      printf("%c",a[i]);
      }
    }
    else
    {
      printf("%s",b[k]);
    }
 return 0;
}
