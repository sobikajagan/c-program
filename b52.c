#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  int n;
char* a[100]={"greater than ten","one","two","three","four","five","six","seven","eight","nine","ten"};
scanf("%d",&n);
if(n>10)
{
printf("%s",a[0]);
}
else{
 printf("%s",a[n]); 
}
return 0;
}
