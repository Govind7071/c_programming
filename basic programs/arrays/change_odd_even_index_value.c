#include<stdio.h>
int main (){
int n ;
printf("enter the size of array ;");
scanf("%d",&n);
int a[n],i;
printf("enter the elements");
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for (i=0;i<n;i++){
    printf("\t %d",a[i]);
}
for (i=0;i<n;i++)
{
if(i%2==0)
a[i]=a[i]+10;
else
a[i]=a[i]*2;
printf("\t %d",a[i]);
}

return 0;
}