#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the size of array");
    scanf("%d",&n); 
    int a[n];
    int i=0,flag=0;
    int pos=0;
    printf("enter the elements in array ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the elements in array are ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
printf("\nenter the element which has to be deleted");
scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==0)
    printf("element not found");
    else
    {
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
}

}