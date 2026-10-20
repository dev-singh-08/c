#include <stdio.h>
int main(){
int k,r,c;
int A[2][2]={0,1,2,3};
int B[2][2]={0,1,2,3};
int C[2][2]={0,0,0,0};
// printf("Enter elements of array A");
// 
  for (r=0;r<2;r++){
    for(c=0;c<2;c++){
        for (k=0;k<2;k++){
            C[r][c]+=A[r][k]*B[k][c];
        }  
      }}
  for (r=0;r<2;r++){
    for(c=0;c<2;c++){
    printf("%d ",C[r][c]);
    }printf("\n");}

return 0;
}