#include<stdio.h>
#define n 6
int main(){
    int a[n][n],b[n][n],s,m[n][n];
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
    // now two matrices a and b are multiply in sum matrix
    for(i=0;i<s;i++){
    for(j=0;j<s;j++){
        m[i][j]=0;
       m[i][j] = m[i][j] + a[i][j]*b[i][j];
    }
    }
    for(i=0;i<s;i++){
    for(j=0;j<s;j++){
   printf("multiply of matrices = %d\n",m[i][j]);
    }
    }
    
    return 0;
}
/*
output 
enter the size of an array:
3
1
1
1
2
2
2
3
3
3
1
1
1
2
2
2
3
3
3
multiply of matrices = 1
multiply of matrices = 1
multiply of matrices = 1
multiply of matrices = 4
multiply of matrices = 4
multiply of matrices = 4
multiply of matrices = 9
multiply of matrices = 9
multiply of matrices = 9*/