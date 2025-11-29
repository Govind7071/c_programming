#include<stdio.h>
#include<math.h>
int indexSequentialSearch(int a[],int n,int key){
    int low=0,high=n-1;
    if(key<a[low]||key>a[high])
    return -1;
    int step=(int) sqrt(n);
    int i=0;
    while(i<n && a[i]<key)
    i=i+step;
    if(a[i]==key && i<n)
    return i;
    else{
        int fi=i-step+1;
        int li=i-1;
        for(int j=fi;j<=li;j++){
            if(a[j]==key)
            return j;
        }
        return -1;
    }
}
int main (){
    int a[]={1,3,5,7,9};
    int n = sizeof(a)/sizeof(a[0]);
    int key;
    printf("the element to be searched");
    scanf("%d",&key);
    int result=indexSequentialSearch(a,n,key);
    if(result!=-1)
    printf("the item position %d", result+1);
    else{
        printf("the item not found");
    }
     return 0;
}
// #include <stdio.h>
// #include <math.h> // for sqrt()

// // Function to perform Index Sequential Search
// int IndexSequentialSearch(int A[], int N, int x) {
//     int low = 0;
//     int high = N - 1;

//     // Check if x is outside the array's range
//     if (x < A[low] || x > A[high])
//         return -1;

//     // Step size = √N
//     int step = (int)sqrt(N);
//     int i = 0;

//     // Jump through the array by step size
//     while (i < N && A[i] < x)
//         i += step;

//     // If exact match found during jumps
//     if (i < N && A[i] == x)
//         return i;

//     // Determine block boundaries for linear search
//     int start = (i - step) > 0 ? (i - step) : 0;
//     int end = (i < N) ? i : (N - 1);

//     // Linear search in the identified block
//     for (int j = start; j <= end; j++) {
//         if (A[j] == x)
//             return j;
//     }

//     return -1; // Not found
// }

// int main() {
//     int A[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20,
//                22, 24, 26, 28, 30, 32, 34, 35, 38, 40,
//                42, 44, 46, 48, 50};
//     int N = sizeof(A) / sizeof(A[0]);

//     printf("Index of 10: %d\n", IndexSequentialSearch(A, N, 10));
//     printf("Index of 26: %d\n", IndexSequentialSearch(A, N, 26));
//     printf("Index of 44: %d\n", IndexSequentialSearch(A, N, 44));
//     printf("Index of 3 (not found): %d\n", IndexSequentialSearch(A, N, 3));

//     return 0;
// }