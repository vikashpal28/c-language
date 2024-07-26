#include<stdio.h>
int main(){
    int num[10],i,n;
    int count;
    printf("enter the 10 numbers:\n");
    for(i=0;i<=9;i++)
    scanf("%d",&num[i]);
    printf("enter the number to find:\n");
    scanf("%d",&n);
count =0;
for(i=0;i<=9;i++){
if(num[i]==n)
count++;
}
printf("number %d is found %d time(s) in the array\n",n,count);
return 0;
}