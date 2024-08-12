#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char lastbottomterm[50]="A";
    char lastterm[50]="B";
    int i;
    for(i=1;i<=5;i++){
        strcpy(str,lastterm);
        strcat(str,lastbottomterm);
        printf("%s\n",str);
        strcpy(lastbottomterm,lastterm);
        strcpy(lastterm,str);
    }
    return 0;
}
/*
output
BA
BAB
BABBA
BABBABAB
BABBABABBABBA
*/