//pascal triangle
#include <stdio.h>
int main() {
   int i,j,space,row,value=1;
   printf("enter the rows: ");
   scanf("%d",&row);
   
   for(i=1;i<=row;i++){
      for(space=1;space<=(row-i);space++){
         printf(" ");
      }
      for(j=1;j<=i;j++){
         if(j==1||i==1){
         value = 1;}
         else{
         value = value*(i-j+1)/(j-1);}
          printf("%2d",value);
      }
      printf("\n");
   }
  
   return 0;
}
/*
output
enter the rows: 5
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
*/
