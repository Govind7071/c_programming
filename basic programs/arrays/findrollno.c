#include<stdio.h>
int main (){
int a[10],i;
printf("enter the marks");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
    if(a[i]<35)
    printf("\t %d",i+1);

}
return 0;
}