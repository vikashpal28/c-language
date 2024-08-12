#include<stdio.h>
int main(){
    char isbn[10];
    int checksum = 0,i;
    printf("enter the ISBN number of 10 digit:\n");
    scanf("%s",isbn);
    for(i=1;i<10;i++){
        isbn[i]=isbn[i]-48;
        checksum = checksum + ((i+1)*isbn[i]);
        }
    if(checksum%11)//if it is not divided by 11
    printf("the wrong number = %d",checksum%11);
    else
    printf("the correct number = %d",checksum%11);
    return 0;

}
/*
output
enter the ISBN number of 10 digit:
9789353008
the correct number = 0
*/