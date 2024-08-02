#include<stdio.h>
#include<math.h>
int main(){
    float arr[11][2]={
        // x          y
          34.22,     102.43,
          39.87,     100.93,
          41.85,     97.43,
          43.23,     97.81,
          40.06,     98.32,
          53.29,     98.32,
          53.29,     100.07,
          54.14,     97.08,
          49.12,     91.59,
          40.71,     94.85,
          55.15,     94.65,
    };
float xysum=0,xsum=0,ysum=0,y2sum=0,x2sum=0,r,n=11;
int i;
for(i=0;i<=10;i++){
    xsum=xsum+arr[i][0];
    ysum=ysum+arr[i][1];
    xysum=xysum+arr[i][0]*arr[i][1];
    x2sum=x2sum+arr[i][0]*arr[i][0];
    y2sum=y2sum+arr[i][1]*arr[i][1];
}
r=(xysum-xsum*ysum)/(sqrt((n*x2sum-xsum*xsum)*(n*y2sum-ysum*ysum)));
printf("correlation coefficient r = %f",r);
return 0;

}
/*
output 
correlation coefficient r = -200.343933
*/