#include<stdio.h>
int sum(int);
int main(){
int n,add;
printf("enter the number:\n");
scanf("%d",&n);
add=sum(n);
printf("sum = %d\n",add);
return 0;
}
int sum(int n){
    int i,d=0;
    for(i=1;i<=n;i++)
    d=d+i;
return d;
}