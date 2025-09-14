#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    int i=0,j=n-1,temp;
    printf("enter the elements in array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the elements in array are ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    i=0;
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("\nthe elements after swapping are ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

 return 0;
}