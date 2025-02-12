#include<stdio.h>
/*int main ()
{
int i,j,k,a[2][2],b[2][2],c[2][2];
printf("enter the elements in matrix a :");
for(i=0;i<2;i++){
{
    for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
}}
printf(" matrix a is : \n");
for(i=0;i<2;i++){
{
    for(j=0;j<2;j++)
    printf("\t %d",a[i][j]);
}
printf("\n");
}
printf("\n enter the elements in matrix b:");
for(i=0;i<2;i++){
{
    for(j=0;j<2;j++)
scanf("%d",&b[i][j]);
}}
printf("\n matrix b is : \n");
for(i=0;i<2;i++){
{
    for(j=0;j<2;j++)
    printf("\t%d",b[i][j]);
}
printf("\n");
}

}
printf("\nthe multiplication of matrix a and b :\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++)
    {
        printf("\t%d",c[i][j]);
    }
    printf("\n");
}
return 0;c[i][j]=0;
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        c[i][j]=0;
for(k=0;k<2;k++)
{
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
    }
}*/
#include<stdio.h>
int main ()
{
    int r1,c1,c2,i,j,k;
    printf("\n enter the size of row of matrix a : \n");
    scanf("%d",&r1);
    printf("\n enter the size of column of matrix a : \n");
    scanf("%d",&c1);
    printf("\n enter the size of column of matrix b : \n");
    scanf("%d",&c2);
    int  a[r1][c1],b[c1][c2],c[r1][c2];
    printf("\n enter the elements in  matrix a : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }}
printf("matrix a is :\n");
for(i=0;i<c1;i++)
    {
        for(j=0;j<c2;j++){
        printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n enter the elements in  matrix b : \n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<c2;j++)
        scanf("%d",&a[i][j]);
    }
    printf("matrix b is :\n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<c2;j++)
        printf("%d",a[i][j]);
        printf("\n");
    }
  /* c[i][j]=0;
  for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
             c[i][j]=c[i][j]+a[i][k]*b[k][j];

            }}}
            printf("multiplication of matrix a and b is :\n ");
            for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
printf("\nthe multiplication of matrix a and b :\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++)
    {
        printf("\t%d",c[i][j]);
    }
    printf("\n");
}
return 0;c[i][j]=0;
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        c[i][j]=0;
for(k=0;k<2;k++)
{
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
    }
}
return 0;
}