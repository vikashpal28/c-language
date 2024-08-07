#include<stdio.h>
int main(){
    int i,j,s;
    printf("enter the size in rows:\n");
    scanf("%d",&s);
    for(i=1;i<=s;++i){
        // This loop prints white spaces before first
    // star of each row
        for(j=i;j<s;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=s;i>=1;--i){
        // This loop prints white spaces before first
    // star of each row
        for(j=s;j>i;--j){
            printf(" ");
        }
        for(j=i;j>=1;--j){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
/*
output
enter the size in rows:
9
        1
       12
      123
     1234
    12345
   123456
  1234567
 12345678
123456789
987654321
 87654321
  7654321
   654321
    54321
     4321
      321
       21
        1
*/