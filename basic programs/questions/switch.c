#include<stdio.h>
int main (){
    int a,x,b,n,y;
    printf("enter the value of a,x,b,n :\n");
    scanf("%d%d%d%d",&a,&x,&b,&n);
    switch(n)
    {
    case 1:
    y=a*x%b;
printf("y=%d",y);
break;
case 2:
y=a*x*x+b*b;
printf("y=%d",y);
break;
case 3:
y=a-b*x;
printf("y=%d",y);
break;
default:
printf("enter a valid value of n ");
}
return 0;
}