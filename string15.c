#include<stdio.h>
int main(){
    char str[16];
    int i,sum=0;
    printf("enter the number in string:\n");
    scanf("%s",str);
    for(i=0;i<16;i++){
        str[i]=str[i]-48;
        if(i%2){
     sum = sum + str[i];
        }
        else{
            str[i]=str[i]*2;
            if (str[i] >= 10)//if number is greater then or equal to 10 so it will subtracted from 9
				str[i] -= 9;
			sum = sum + str[i];	//summing number
        }
    }
    if(!(sum%10)){
        printf("\nnumber is valid.");
    }
    else{
        printf("number is not valid");
    }

    
    return 0;
}
/*
output
enter the number in string:
4567123456789129

number is valid.
*/