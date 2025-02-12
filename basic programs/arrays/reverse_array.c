#include<stdio.h>
int main (){
int i,a[5],b[5];
printf("enter the elements in array :");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
    b[i]=a[4-i];
    
    
    printf("%d",b[i]);
    
}
return 0;
}