#include<stdio.h>
int main(){
int a,b;
printf("enter the values of a and b :");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping the value of a is %d\n and of b is %d",a,b);
//printf("after swap the value of  b is %d",b);
return 0;
}