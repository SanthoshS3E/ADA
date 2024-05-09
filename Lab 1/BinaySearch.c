
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x){
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}

void main(){
    int arr[5];
    int value;
    for(int i=0;i<5;i++){
        printf("enter the value for index %d \n",i);
        scanf("%d",&value);
        arr[i]=value;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("enter the value to be searched \n");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array"): printf("Element is present at index %d",result);
}
