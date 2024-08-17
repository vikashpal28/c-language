#include<stdio.h>
#include<string.h>
int main(){
    char *str[]={
        "we all teach you how to..",
        "move a mountain", "level a bulinding",
        "erase the past","make a million",
        "...all through c!"
    };
    char str1[20],*p;
    int i;
    printf("enter the string to be search:");
    scanf("%s",str1);
    p=NULL;
    for(i=0;i<6;i++){
        p=strstr(str[i],str1);
        if(p!=NULL){
            printf("%s found in the array",str1);
            return 0;
        }
    }
    printf("%s not found in the array",str1);
    return 0;
    }
    /*
    output
    enter the string to be search:million
     million found in the array
    */