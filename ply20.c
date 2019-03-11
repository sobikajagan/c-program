#include <stdio.h>
#include<string.h>
int main()
{
  
char a[10];
int i;
scanf("%s",a);

for(i=0;a[i]!='\0';i++)
{
  
  if(a[i]=='A' )
  printf("C");
  else if(a[i]=='Y')
  printf("B");
  else if(a[i]=='X')
  printf("A");
  else
  printf("%c",a[i]+3);
  }
    return 0;
}
