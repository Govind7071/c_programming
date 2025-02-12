#include<stdio.h>
int main (){
int sp,cp,profit,loss;
printf("enter the cp and sp");
scanf("%d%d",&cp,&sp);
profit =sp-cp;
loss= cp-sp;

if (sp>cp)
printf("the seller had made profit %d",profit);
if(sp<cp)
printf("the seller had made loss %d",loss);
if(sp==cp)
printf("no profit no loss");
return 0;


}