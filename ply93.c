int main(void) {
 int n,i=0,k,j=0,a[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i=i+2)
 {
    k=a[i];
    a[i]=a[i+1];
    a[i+1]=k;
 }
 for(i=0;i<n;i++)
 {
    printf("%d\t",a[i]);
 }

  return 0;
}
