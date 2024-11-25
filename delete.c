#include<stdio.h>
#define max 100
int main(){
    int arr[100],index,i,n;
    printf("enter the number in array:\n");
    scanf("%d",&n);

    printf("enter the number in array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter the position:\n");
    scanf("%d",&index);

    index = index-1;
    for(i=index;i<n-1;i++){
        arr[i] = arr[i+1];
    }                     

    printf("after deletion:\n");
    for(i=0;i<n-1;i++){
    printf("%d ",arr[i]);    
    }   
    return 0;

}