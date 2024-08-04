#include<stdio.h>
int main(){
    int a[5][5]={
        {11,1,7,9,7},
        {13,54,56,2,5},
        {23,43,89,22,13},
        {14,15,17,16,19},
        {45,3,6,8,10}    
        };
        int i,j,big = 0;
        big = a[0][0];
        int small;
        small = a[0][0];
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                if(a[i][j]>big)
                big = a[i][j];
            }
           
        }
         printf("\nlargest number in the matrix is %d\n",big);
         printf("\n");
         for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                if(a[i][j]<small)
                small = a[i][j];
            }
           
        }
         printf("\nsmallest number in the matrix is %d\n",small);
        return 0;
}
/*
output
largest number in the matrix is 89


smallest number in the matrix is 1
*/