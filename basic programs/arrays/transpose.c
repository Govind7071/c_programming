#include<stdio.h>
int main (){
int i,j,a[3][3],t;
printf("enter the elements in matrix :");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
     scanf("%d",&a[i][j]);
    }  
}
printf("matrix a is :\n");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
     printf("\t%d",a[i][j]);
    } 
    printf("\n") ;
}
for (i=0;i<3;i++)
{
    for (j=i+1;j<3;j++)
    {
    t=a[i][j];
a[i][j]=a[j][i];
a[j][i]=t;

    }
    }
    printf("the transpose is :\n");
    for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        printf("\t%d",a[i][j]);
    }
    printf("\n");
}
}