//call by value
#include<stdio.h>
void swapping(int , int);
int main(){
    int a=10,b=20;
   
    swapping(a,b);
    printf("a = %d\n b = %d\n",a,b);
    return 0;
}
void swapping(int a, int b){
    int t;
    t=a;
    a=b;
    b=t;
   printf("a = %d\n b = %d",a,b);
}