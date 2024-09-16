#include<stdio.h>
int fact(int n);
int main(){
    int n;
    int f;
    printf("enter the number:");
    scanf("%d",&n);
    f = fact(n);
    printf("factorial of %d = %d",n,f);
    return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1*n;
    return factN;
}