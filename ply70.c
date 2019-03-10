#include <stdio.h>
#include <string.h>

int main(void) {
	char a[10];
  char b[10]="Answer";
  scanf("%s",a);
  printf("%s",strcat(a,b));
	return 0;
}
