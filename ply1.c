#include<stdio.h>
#include<string.h>

int main() {
  char a[100],b[100];
  int n,i,j,k=0;
  scanf("%[^\n]%*c",a); 
  n=strlen(a);

	    {
	        for(i=n-1;i>=0;i--)
	        {
	            printf("%c",a[i]);
	        }
	        printf(" ");
      }    
    
    
  
     return 0;
}
