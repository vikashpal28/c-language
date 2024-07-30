#include<stdio.h>
#define N 10
int main(){
    int arr[N];
    printf("enter the  10 numbers in array:\n");
    for(int i = 0;i<10;i++)
    scanf("%d",&arr[N]);
    for(int i=1;i<=10;i++)
    printf("%d ",arr[N]*3);
    return 0;
}
/*
output
1
2
3
4
5
6
7
8
9
10
3 6 9 12 15 18 21 24 27 30*/