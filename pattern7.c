// Floyd's Triangle.
#include<stdio.h>
int main(){
    int i,j,s,n=1;
    printf("enter the size in rows:\n");
    scanf("%d",&s);

    for(i=1;i<=s;i++){
        for(j=1;j<=i;++j){
            printf("%d",n);
            ++n;
        }
        printf("\n");
    }
    //invert of Floyd's triangle
    for(i=s;i>=1;i--){
        for(j=i;j>=1;--j){
            printf("%d",n);
            n--;
        }
        printf("\n");
    }
    return 0;

}
/*
output
enter the size in rows:
5
1
23
456
78910
1112131415
1615141312
111098
765
43
2
*/