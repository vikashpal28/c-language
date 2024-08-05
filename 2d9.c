#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    int i, j, row, col, count = 0;
 
    printf("Please Enter Number of rows and columns:  ");
    scanf("%d %d", &i, &j);
 
    if(i!=j)
    {
        printf("Rows not equal to columns. Therefore Non-Symmetric Matrix.");
        exit(0);
    }
 
    //Initialize 2d-array of size i,j.
    int a[i][j], b[i][j];
 
    printf("\nEnter the Matrix Elements \n");
    for(row = 0; row < i; row++)
    {
        for(col = 0;col < j;col++)
        {
            scanf("%d", &a[row][col]);
        }
    }
 
    //Transpose of matrix
    for(row = 0; row < i; row++)
    {
        for(col = 0;col < j; col++)
        {
            b[col][row] = a[row][col];
        }
    }
 
    //Check if matrix a equals to matrix b or not.
    for(row = 0; row < i; row++)
    {
        for(col = 0; col < j; col++)
        {
            if(a[row][col] != b[row][col])
            {
                count++;
                break;
            }
        }
    }
    if(count == 0)
    {
        printf("\nThe given Matrix is a Symmetric Matrix ");
    }
    else
    {
        printf("\nThe given Matrix is Not a Symmetric Matrix ");
    }
 
    return 0;
}
/*
Please Enter Number of rows and columns:  3
3

Enter the Matrix Elements
2
3
6
3
4
5
6
5
9

The given Matrix is a Symmetric Matrix*/