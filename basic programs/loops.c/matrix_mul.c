#include<stdio.h>
int main ()
{
    int i,j,a[100][100],b[100][100],c[100][100],k,r1,c1,r2,c2,sum=0;
    printf("enter the size of row and column of first matrix :");
scanf("%d%d",&r1,&c1);
printf("enter the size of row and column of second matrix :");
scanf("%d%d",&r2,&c2);
printf("enter the elements in first matrix");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
}
printf("\nfirst matrix :\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("enter the elements in second matrix");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
}
printf("\nsecond matrix :\n");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++)
printf("%d\t",b[i][j]);
printf("\n");
}
if(c1==r2){
  for(i=0;i<r1;i++){
for(j=0;j<c2;j++)
{
   c[i][j]=0; 
for(k=0;k<r2;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}  
}

printf("matrix multiplication :\n");
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++)
    printf("%d\t",c[i][j]);
    printf("\n");
}
}
else
printf("the matrix cannot multiply");
return 0;
}