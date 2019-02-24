#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
char a[100];
scanf("%[^\n]",a);
if(printf("%s",a))
return 0;
}
