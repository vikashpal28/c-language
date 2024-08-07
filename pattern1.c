//hollow rectangle
#include<stdio.h>
int main(){
    int i,j,s;
    printf("enter the size in rows:\n");
    scanf("%d",&s);
    
    for(i=1;i<=s;i++){
        for(j=1;j<=s;j++){
            if(i==1||i==s||j==1||j==s){// this is used to print in first row and column
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
/*
output 
enter the size in rows:
7
*******
*     *
*     *
*     *
*     *
*     *
********/