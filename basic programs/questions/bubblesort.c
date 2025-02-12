#include <stdio.h>
int main()
{
 int a[5], i, j, t;
 printf("\n Enter the values in array :\n");
 for (i = 0; i < 5; i++)
 scanf("%d", &a[i]);
 printf("\n The values in array :\n");
 for (i = 0; i < 5; i++)
 printf("\t%d", a[i]);
for (i = 0; i < 5; i++)
 {
 for (j = 0; j < 5 - i - 1; j++)
 {
 if (a[j] > a[j + 1])
 {
 t = a[j];
 a[j] = a[j + 1];
 a[j + 1] = t;
 }
 }
 }
printf("\nThe sorted array is :\n");
 for (i = 0; i < 5; i++)
 printf("\t%d", a[i]);
}