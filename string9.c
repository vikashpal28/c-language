#include<stdio.h>
#include<string.h>
int main(){
    char source[]="Folks",target[20]="hello";
    strcat(target,source);
    printf("source string = %s\n",source);
    printf("target string = %s\n",target);
    return 0;
}
/*
output
source string = Folks
target string = helloFolks
*/