#include<stdio.h>
#include<string.h>
int main(){
    char arr[] = "Bamboozled";
    int len1,len2;
    len1 = strlen(arr);
    len2 = strlen("humpty dumpty");
    printf("string = %s length = %d\n",arr,len1);
    printf("string = %s length = %d\n","humpty dumpty",len2);
    return 0;
}
/*
string = Bamboozled length = 10
string = humpty dumpty length = 13
*/