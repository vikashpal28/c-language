#include<stdio.h>
#include<string.h>
int main(){
    char *str[]={
             "rajesh","ashish","milind",
             "pushkar","akash"
    };
    char *t;
    int i,j;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if((strcmp(str[i],str[j]))>0){
                t=str[i];
                str[i]=str[j];
                str[j]=t;
            }
        }
    }
    for(i=0;i<5;i++)
    printf("%s\t",str[i]);
    return 0;
}
/*
output
akash   ashish  milind  pushkar rajesh
*/