#include <stdio.h>


void BubbbleSort(int arr[]){

int temp;
for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }


    }

}




}

int main(){

int arr[5];
for(int i=0;i<5;i++){
    printf("Enter the Element for the index %d\n",i);
    scanf("%d",&arr[i]);
}

printf("Sorted Array :\n");
BubbbleSort(arr);
for(int i=0;i<5;i++){
    printf("%d\t",arr[i]);

}

return 0;
}

