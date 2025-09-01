#include<stdio.h>
int main ()
{ 
    int n,m,p;
  float  unit=0;
    printf("enter the unit");
    scanf("%d%d",&n,&m);
    p=m-n;
    if(p<=200)
    unit=p*5.5;
    else if(p<=400)
    unit=700+p*6.0;
    else if(p<=600)
    unit=1400+p*7.50;
    else
    unit=1850+p*9.0;
    printf("%.2f",unit);
}