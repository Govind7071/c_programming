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
  
  int x = 1;int i,n,a[50],loc=0;
    printf("enter the size of array :");
    scanf("%d",&n);
printf("enter the elements in array :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the array :");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
  int n = sizeof(array)/sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}
/* C program to implement linear search using loop
#include <stdio.h>

int search(int a[],int n,int x );
int main() {
    int i,n,a[50],loc=0;
    printf("enter the size of array :");
    scanf("%d",&n);
printf("enter the elements in array :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the array :");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
loc=search(a[],n,x);

    printf("%d is at location %d and at index %d",n,loc,loc-1);
return 0;
}
int search(int n)
{
  int i;
  for (i=0;i<n;i++)
  if(a[i]==n)
}*/