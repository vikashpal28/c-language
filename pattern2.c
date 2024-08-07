#include<stdio.h>
int main(){
    int i,j,s;
    printf("enter the size in rows\n");
    scanf("%d",&s);
    for(i=1;i<=s;i++){
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=s;i>=1;i--){
        for(j=2*i+1;j>=s;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
output
enter the size in rows
5
*
***
*****
*******
*********
*******
*****
***
*
*/