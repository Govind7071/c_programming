#include<stdio.h>
int main (){
    int N;
    printf("enter the size of array");
    scanf("%d",&N);
    int i,n,a[N],loc=-1;
    printf("\enter the elements in the array");
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    printf("\n the elements in array a:");
    for(i=0;i<N;i++)
        printf("\t %d",a[i]);
        printf("\n enter the element to be search:");
        scanf("%d",&n);
for(i=0;i<N;i++)
{
if(a[i]==n)
{
loc=i;
break;
}   
}
if(loc>-1)
printf("the element %d is at %d position",n,loc+1);
else
printf("the element is not in array");
return 0;
}