#include<stdio.h>
int main (){
    int a[7],i,sume=0,sumo=0,diff;
printf("enter the elements");
for (i=0;i<7;i++)
{
    scanf("%d",&a[i]);
    if(i%2==0)
    sume=sume+a[i];
    else
    sumo=sumo+a[i];
}

diff=sume-sumo;
printf("%d",diff);
return 0 ;
}