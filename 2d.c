#include<stdio.h>
int main(){
    int stud[4][2],i;
for(i=0;i<4;i++){
    printf("enter the roll no. and marks\n");
    scanf("%d%d",&stud[i][0],&stud[i][1]);
}
for(i=0;i<4;i++){
printf("%d = %d\n",stud[i][0],stud[i][1]);
}
return 0;
}