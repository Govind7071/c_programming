#include<stdio.h>
void display (int []);
int main ()
{
    int a[10],i;
    printf("enter the elements ");
    for (i=0;i<10;i++)
    scanf("%d",&a[i]);
    display(a);
    return 0; 

}
void display (int a[])
{
int i;
printf("the elements of array a");
for (i=0;i<10;i++)
printf("\t %d",a[i]);
}