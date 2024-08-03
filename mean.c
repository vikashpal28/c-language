#include<stdio.h>
#define N 100
int main(){
    int a[N],i,j,t,s;
    int mean,median;
    printf("enter the size of an array\n");
    scanf("%d",&s);
    printf("enter the number in array\n");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<s;i++){
        sum = sum + a[i];
    }
    mean = sum/s;
    printf("mean of array = %d\n",mean);
    for(i=0;i<s-1;++i){
    for(j=0;j<s-i-1;++j){
    if(a[j]>a[j+1]){
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }
    }
    }
    printf("\nsorted array");
    for(i=0;i<s;++i){
        printf("%d,",a[i]);
    }
    if(s%2==0)
    median = (a[s/2]+a[(s/2)+1])/2;
    else
    median = a[s/2];

    printf("median = %d",median);  
    return 0;

}
/*
output 
enter the size of an array
10
enter the number in array
10
9
4
5
6
7
8
3
2
1
mean of array = 5

sorted array1,2,3,4,5,6,7,8,9,10,median = 6*/