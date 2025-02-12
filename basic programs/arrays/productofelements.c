#include<stdio.h>
int main (){
int a[5],i,prod=1;
printf("enter the elements");
for (i=0;i<5;i++){
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    prod=prod*a[i];
    }
    printf("%d",prod);

return 0;
}