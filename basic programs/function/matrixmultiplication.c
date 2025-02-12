#include<stdio.h>
void multiply(int mat1[2][2],int mat2[2][2],int ,int ,int );

int main()
{
    int mat1[2][2],mat2[2][2];
    int i,j,k,m,n,p;
    printf("Enter the elements in  1st matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    //no of col of 1st mat = no of rows of 2nd mat
   
    printf("Enter the elements of the 2nd matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    
    printf("The 1st matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    multiply(mat1,mat2,m,n,p);
}

void multiply(int mat1[2][2],int mat2[2][2],int m,int n,int p)
{
    int mul[2][2],i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            mul[i][j]=0;
            for(k=0;k<2;k++)
            {
                mul[i][j]=mul[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("The resultant matrix formed on multiplying the two matrices\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}
