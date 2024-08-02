#include<stdio.h>
#include<math.h>
int main(){
    int x[10],y[10],des;
    int i;
    printf("enter the x and y values\n");
    for(i=0;i<10;i++)
    scanf("%d%d",&x[i],&y[i]);
    for(i=0;i<10;i++){
        des = des + sqrt((x[i+1]-x[i],2)+(y[i+1]-y[i],2));
    }
    printf("the total from last to first = %d",des);

    return 0;
}
/*output 
enter the x and y values
1
2
3
4
5
6
7
8
9
10
10
9
8
7
6
5
4
3
2
1
the total from last to first = 3014676
*/