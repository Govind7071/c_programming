// Linear Search in C

#include <stdio.h>

int search(int array[], int n, int x) {
  
  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int x,i;
  printf("enter the size of array");
  scanf("%d",&x);
  int array[x];
  printf("enter the elements in array :");
for(i=0;i<x;i++)
scanf("%d",&array[i]);

  int y ;
  printf("enter the element for seach");
  scanf("%d",&y);
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}