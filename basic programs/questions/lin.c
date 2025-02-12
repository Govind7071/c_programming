// C program to implement linear search using loop
#include <stdio.h>

int linearSearch(int* arr, int n, int key){
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    
    return -1;
}

int main() {
    int arr[50],i,n;
    printf("enter the size of 
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("enter the element for search");
    int x;
    scanf("%d",&x);
    int key =x ;
    int i = linearSearch(arr, n, key);
    if (i == -1)
        printf("element Not Found");
    else
        printf("element Found at Index: %d,location :%d", i,i+1);

    return 0;
}