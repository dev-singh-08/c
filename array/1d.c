#include <stdio.h>
int main(){
int i,n,sum=0;
float avg;
printf("Enter number of elements in an array");
scanf("%d",&n);
int arr[n];
printf("Enter %d elements",n);
for (i=0;i<n;i++){
scanf("%d",&arr[i]);
sum =sum+arr[i];
}
printf("The Sum of %d elements is %d \n",n,sum);
printf("The average is %.2f", (float)sum/n);
return 0;
}