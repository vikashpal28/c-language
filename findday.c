#include<stdio.h>
#include<math.h>
int main(){
    int k,f,c,m,d,w,y;
    printf("enter  the year:\n");
    scanf("%d",&y);
printf("enter the day:\n");
scanf("%d",&d);
printf("enter the month:\n");// do not put value greater than 14
scanf("%d",&m);// for jan = 13 and feb = 14; march = 3
        if(m==13||m==14){
        y=y-1;
    }
    c=y/100;
    k=y%100;
    f=k+floor(k/4)+floor(c/4)-2*c+floor(13*(m+1)/5)+d-1;
    w=f%7;
    switch(w){
        case 0: printf("The day is Sunday\n");
         break;
        case 1: printf("The day is Monday\n");
         break;
        case 2: printf("The day is Tuesday\n"); 
        break;
        case 3: printf("The day is Wednesday\n"); 
        break;
        case 4: printf("The day is Thursday\n"); 
        break;
        case 5: printf("The day is Friday\n");
         break;
        case 6: printf("The day is Saturday\n"); 
        break;
    }
    return 0;

}
/*
output
enter  the year:
2024
enter the day:
27
enter the month:
8
The day is Tuesday
*/