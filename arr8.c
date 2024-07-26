#include<stdio.h>
int main(){
    int num1[5],num2[5],i,j;
    printf("enter the five number:\n");
    for(i=0;i<=4;i++)
    scanf("%d",&num1[i]);
    for(i=0,j=4;i<=4;i++,j--)
    num2[j]=num1[i];
    printf("element in reverse order:\n");
    for(i=0;i<=4;i++)
    printf("%d\t",num2[i]);
    return 0;
}