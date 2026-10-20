#include <stdio.h>
int main(){
int n ,i,l;
printf("enter number of elements in array");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
printf("Enter element %d :",i+1);
scanf("%d",&arr[i]);
}
l=arr[0];
for(i=1;i<n;i++){
if (arr[i]>l){
    l=arr[i];
}
}
printf("The largest element in array is %d",l);
return 0;
}