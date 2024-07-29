#include<stdio.h>
int main(){
    int num[25];
    int i,pos=0,neg=0,zer=0,even=0,odd=0;
    for(i=0;i<=24;i++){
    printf("enter the number:\n");
    scanf("%d",&num[i]);}
    for(i=0;i<=24;i++){
        if(num[i]>0)
        pos++;
        if(num[i]<0)
        neg++;
        if(num[i]==0)
        zer++;
        if(num[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("\n data contain %d positive, %d negative, %d zeros, %d even and %d odd numbers",pos,neg,zer,even,odd);
    return 0;
}