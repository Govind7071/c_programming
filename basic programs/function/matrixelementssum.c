int sum(int[][3] );
int main (){
    int a[3][3],i,j,r;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("\n the matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
   printf("\n");
    }
    r=sum(a);
    printf("\n the sum is %d",r);
}
int sum (int a[][3])
{
    int i,j,s=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s=s+a[i][j];
}}
return s;
}