#include<stdio.h>
#include<conio.h>
#define  max 100  
int  main()
{
    int i;
    int  a[max],n,p,s;
    printf("enter the size of the array");
    scanf("%d",&s);//input the size of an array
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);// enter the number in array loaction
    }
    printf("enter the number and pos to replace the number:");
    scanf("%d%d",&n,&p);//take the input number and position to replace it
    s=s+1;// increase the size of an array;
    for(i=s-1;i>=p;i--){// position is used to replace one be one in array.
        a[i]=a[i-1];
    }
    a[p-1] = n;//number is input in given position
    printf("after insert the new array is");
    for(i=0;i<s;i++){
        printf("%d, ",a[i]);//printf the new array
    }
    

        return 0;
}
/*
output
enter the size of the array5
1
2
3
4
5
enter the number and pos to replace the number:3
4
after insert the new array is1, 2, 3, 3, 4, 5,*/