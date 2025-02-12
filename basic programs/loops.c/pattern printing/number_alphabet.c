#include<stdio.h>
int main ()
{
    int i,j,a;
    for(i=65;i<=69;i++){
        for(j=65;j<=i;j++)
        {
        if(i%2==0)
        printf("%c\t",j);
        else
        printf("%d\t",j-64);
        }
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>

int main()
{
    for (int i = 1; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 65; j <= 65 + i - 1; j++)
            {
                printf("%c ", j);
            }
        }
        else
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf("%d ", j + 1);
            }
        }

        printf("\n");
    }
    return 0;
}*/

    