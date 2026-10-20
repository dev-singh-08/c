#include <stdio.h>
int main(){
int n,m,i,j;
printf("Enter dimensions of array n x m");
scanf("%d %d",&n,&m);
int a[n][m];
int b[n][m];
printf("Enter elements of array A");
for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
printf("Enter elements of array B");
for (i=0;i<n;i++)
    for(j=0;j<m;j++)
        scanf("%d",&b[i][j]);
  for (i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d  ",a[i][j]+b[i][j]);
    }printf("\n");}
return 0;
}