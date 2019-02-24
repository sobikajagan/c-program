#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  char a[100],b[100],c[100];
  int l,i;
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<l;i++)
  {
    if(i%2==0)
    {
      
      printf("%c",a[i]);
    }
  }
  printf("\n");
   for(i=0;i<l;i++)
  {        
    if(i%2!=0)
    {
     
      printf("%c",a[i]);
    }
  
  }
  return 0;
}
