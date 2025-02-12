//display the AP of series 1,3,5,7..... upto 'n' terms.
#include<stdio.h>
int main (){
int i,n;
printf("enter the terms :");
scanf("%d",&n);
printf("the series is :");
for (i=1;i<=2*n-1;i=i+2)
printf("%d\t",i);
return 0;
}