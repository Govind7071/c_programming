#include<stdio.h>
void display(int []);
int search(int);
int main ()
    {
        int a[10],i,loc;
        printf("\n enter the elements :");
        for(i=0;i<10;i++)
        scanf("%d",&a[i]);
        display(a);
        return 0;
    }
void display(int a[])
{
    int i;
    printf("the elements of array a :");
    for(i=0;i<10;i++)
    printf("%d",a[i]);
}
int search(int a)
    num=0,i=0;
    for(i=0;i<10;i++){
    if(num==a[i])
break;
loc=i;
return
}