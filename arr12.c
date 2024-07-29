#include<stdio.h>
#define N 5
int main(){
    int arr[N],i;
    int *small;
    printf("enter the 25 no:\n");
    for(i=0;i<=N;i++)
    scanf("%d",&arr[i]);
    small=&arr[0];
    for(i=0;i<N;i++)
    if(arr[i]<*small)
        *small=arr[i];
    printf("smallest no %d\n",*small);
    return 0;
}
/*
output
1
2
3
4
-10
smallest number = -10
*/