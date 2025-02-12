#include<stdio.h>
int main ()
{
    int i,j,a[3][3],b[3][3];
    printf("enter the elements in matrix :" );
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("the matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
     printf("%d",a[i][j]);
     printf("\n");
    }
     for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        b[j][i]=a[i][j];
        }
        printf("\ntranspose of the matrix :\n");
        for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        printf("%d",b[i][j]);
        printf("\n");
}
return 0;
    }