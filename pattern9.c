#include<stdio.h>
int main(){
    int i,n;
    int j;
    printf("enter the number of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
        printf("%d",j);
            
        }
        printf("\n");
    }
    for(i=n;i>=1;i--){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(j=2*i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
/*
enter the number of row: 5
    1
   123
  12345
 1234567
123456789
987654321
 7654321
  54321
   321
    1
    */