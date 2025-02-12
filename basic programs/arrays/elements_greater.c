#include<stdio.h>
int main (){
int a[5],i,count=0;
printf("enter the elements in array ");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
    if(a[i]>68)
    count++;

}
printf("the counting is %d",count);
return 0;
}