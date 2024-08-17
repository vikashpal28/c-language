#include<stdio.h>
#include<string.h>
void xstrrev(char *s);
int main(){
    char str[][35]={
        "to ere is human...",
        "but to really mess things up...",
        "one needs to know C||"
    };
    int i;
    for(i=0;i<=2;i++){
        xstrrev(str[i]);
        printf("%s\n",str[i]);
    }
    return 0;
}
void xstrrev(char *s){
    int l,i;
    char *t,temp;
    l = strlen(s);
    t = s+l-1;
    for(i=1;i<=l/2;i++){
        temp=*s;*s=*t;*t=temp;
        s++;t--;
    }
}
/*
output
...namuh si ere ot
...pu sgniht ssem yllaer ot tub
||C wonk ot sdeen eno
*/