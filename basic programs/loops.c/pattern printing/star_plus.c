#include<stdio.h>
int main ()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if((i==3)||(j==3))
            printf("*\t");
            //else if(j==3)
           // printf("*\t"); 
        else
        printf("\t");
        }
        printf("\n");
        }
        return 0;
}
/*#include <stdio.h>

int main() {
    // Write C code here
    int i, j;
    for (i=0; i<5;i++){
        for (j=0; j<5; j++) {
            if (i==2) printf("*\t");
            else if (j==2) printf("*\t");
            else printf(" \t");
        }
        printf("\n");
    }

    return 0;
}*/