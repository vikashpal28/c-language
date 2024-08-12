#include<stdio.h>
int main(){
    char str[6];
    int num=0,i;
    printf("enter the string containing number:\n");
    scanf("%s",str);
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]>=48&&str[i]<=57){
        num = num*10+(str[i]-48);
        }
        else{
            printf("not a valid string\n");
            return 1;
        }
    }
    printf("the number is: %d\n",num);
    return 0;
}
/*
output
enter the string containing number:
124
the number is: 124
*/