// #include<stdio.h>
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pivotPos = partition(arr, low, high);

//         quickSort(arr, low, pivotPos - 1);
//         quickSort(arr, pivotPos + 1, high);
//     }
// }
// void partition(int arr[], int low, int high){
      
// }
// int main () {
//     int i=0;
// int arr[]={25,57,48,37,12,96,82,33};
// int n=sizeof(arr)/sizeof(arr[0]);
// printf("\n unsorted array:");
// for (int i=0;i<n;i++){
//     printf("%d",arr[i]);
// }
// quicksort(arr,i,n-1);
// printf("sorted array\n");
// for (int i=0;i<n;i++){
//     printf("%d",arr[i]);

//  }}
#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];     // FIRST ELEMENT AS PIVOT
    int i = low + 1;
    int j = high;

    while (i<j) {
        while (i <= high && arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i >= j)
           

        swap(&arr[i], &arr[j]);
    }

   
    swap(&arr[low], &arr[j]);

    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotPos = partition(arr, low, high);

        quickSort(arr, low, pivotPos - 1);
        quickSort(arr, pivotPos + 1, high);
    }
}

int main() {
    int arr[] = {25, 57, 48, 37, 12, 92, 86, 33};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    quickSort(arr, 0, n - 1);

    printf("\nSorted Array:   ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
