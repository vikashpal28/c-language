#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[20],new[20];
    char *s,*t;
    int pos, n,i;
    printf("\nEnter the string\n");
    scanf("%s",str);
    printf("Enter position and no of charcters to extract:");
    scanf("%d%d",&pos,&n);
    s=str;
    t=new;
    if(pos<0||pos>strlen(str)){
        
        printf("improper position value");
        exit(1);
    }
    if(n<0)
    n=0;
    if(n>strlen(str))
    n = n-strlen(str)-1;
    s=s+pos;
    //Moves the pointer s to the starting position for extraction.
    for(i=0;i<n;i++){
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
    printf("the substracting is : %s\n",new);
    return 0;

}
/*
output

Enter the string
king
Enter position and no of charcters to extract:3
4
the substracting is : g
*/