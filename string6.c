#include<stdio.h>
#include<string.h>
int xstrlen(char *);
int main(){
    char arr[]="bamboozled";
    int len1,len2;
    len1 = xstrlen(arr);
    len2 = xstrlen("humpty dumpty");
    printf("string = %s length = %d\n",arr,len1);
    printf("string = %s length = %d\n","humpty dumpty",len2);
    return 0;

}
int xstrlen(char *s){
    int length = 0;
    while(*s!='\0'){
        length++;
        s++;
    }
    return(length);
}
/*
the function xstrlen() is fairly simple. all that it does is, it keeps counting the characters 
till it reaches the end of the string, i.e. up to '\0'.
output
string = bamboozled length = 10
string = humpty dumpty length = 13
*/