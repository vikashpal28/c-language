#include<stdio.h>
int main(){
    int i=0,j=0,s;
    printf("enter the size in rows:\n");
    scanf("%d",&s);
    for(i=1;i<=s;++i){
        // This loop prints white spaces before first
    // star of each row
        for(j=i;j<s;++j){
            printf(" ");
        }
        // This loop prints star in each row
        for(j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }

    for(i=s;i>=1;--i){
        for(j=s;j>i;--j){
            printf(" ");
        }
        for(j=i;j>=1;--j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
output 
enter the size in rows:
6
     *
    **
   ***
  ****
 *****
******
******
 *****
  ****
   ***
    **
     *
*/