#include<stdio.h>
int main(){
    int i,j,s;
    printf("enter the size in rows:\n");
    scanf("%d",&s);
    for(i=1;i<=s;i++){
        for(j=1;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=s;i>=1;i--){
        for(j=2*i+1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
/*
output
enter the size in rows:
8
1
123
12345
1234567
123456789
1234567891011
12345678910111213
123456789101112131415
1716151413121110987654321
151413121110987654321
13121110987654321
1110987654321
987654321
7654321
54321
321
*/