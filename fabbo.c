#include<stdio.h>
int main(){
    int n1=0,n2=1;
    int n,i;
    int nextterm=n1+n2;
    printf("enter the number:\n");
    scanf("%d",&n);
    printf("fibo series : %d, %d, ",n1,n2);
    for(i=3;i<=n;++i){
    printf("%d, ",nextterm);
    n1=n2;
    n2=nextterm;
    nextterm=n1+n2;}
return 0;
}