#include<stdio.h>
int main(){
     int n,a,b;
     printf("enter the number:");
     scanf("%d",&n);
     int i;
     int arr[n];
     for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
     for(i=0;i<n;i++){
        b=i+1;
        a=n-b;
        if(arr[i]==arr[a])
        printf("\narr[%d] = arr[%d-%d]",i,n,b);
     }
    return 0;
}
/*
output
enter the number:6
22
32
42
52
32
22

arr[0] = arr[6=1]
arr[1] = arr[6=2]
arr[4] = arr[6=5]
arr[5] = arr[6=6]*/