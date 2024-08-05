#include<stdio.h>
#define n 6
int main(){
    int a[n][n],b[n][n],s,sum[n][n];
    printf("enter the size of an array:\n");
    scanf("%d",&s);// input the array size
    int i,j;
    //input the number in matrix a;
    for(i=0;i<s;i++){
    for(j=0;j<s;j++){
        scanf("%d",&a[i][j]);
    }
    }
//input the number in matrix 2;
    for(i=0;i<s;i++){
    for(j=0;j<s;j++){
        scanf("%d",&b[i][j]);
    }
    }
    // now two matrices a and b are added in sum matrix
    for(i=0;i<s;i++){
    for(j=0;j<s;j++){
       sum[i][j] = a[i][j]+b[i][j];
       printf("sum of matrices = %d\n",sum[i][j]);
    }
    }
    
    return 0;
}