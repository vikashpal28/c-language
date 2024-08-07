#include<stdio.h>
int main(){
    int i,j;
    char alphbate = 'A',input;
    printf("Enter an uppercase character you want to print in the last row:\n");
    scanf("%c",&input);
    for(i=1;i<=(input-'A'+1);++i){
        for(j=1;j<=i;++j){
            printf("%c",alphbate);
        }
        alphbate++;
        printf("\n");
    }
    for(i=(input-'A'+2);i>=1;--i){
        for(j=i;j>=1;--j){
            printf("%c",alphbate);
        }
        alphbate--;
        printf("\n");
    }
    return 0;
}
/*
output
Enter an uppercase character you want to print in the last row:
H
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
HHHHHHHH
IIIIIIIII
HHHHHHHH
GGGGGGG
FFFFFF
EEEEE
DDDD
CCC
BB
A
*/