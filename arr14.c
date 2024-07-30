//bubble sorting  in descending order
#include<stdio.h>
// sort the bubble
void bubblesort(int arr[],int size){
    for(int i=0;i<size-1;++i){
        for(int j=0;j<size-i-1;++j){
            if(arr[j] < arr[j+1]){
             int temp = arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
    }
}
int PrintArray(int arr[], int size){
    for(int i=0;i<size;++i){
        printf("%d, ",arr[i]);
    }
    printf("\n");
}
int main(){
    int data[]={44,33,55,22,11};
    //find the length of array
    int size = sizeof(data)/sizeof(data[0]);
    bubblesort(data, size);
    printf("bubble sort in descending order:\n");
    PrintArray(data,size);
    return 0;
}