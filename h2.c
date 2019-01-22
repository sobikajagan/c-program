#include<stdio.h>

int main() {
  int n,r,re;
  scanf("%d",&n);
  while(n!=0)
  {
    re=re*10;
    re=re+n%10;
    n/=10;
  }
  printf("%d",re);
  
  return 0;
}
