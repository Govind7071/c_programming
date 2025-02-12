/*if cp and sp of an item is input through the keyboard
write a program to determine whether seller has made profit or incurred loss
also determine hownmuch profit or loss he incurred*/
#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("enter the cp and sp :");
    scanf("%d%d",&cp,&sp);
    profit=sp-cp;
    loss=cp-sp;
    if (sp>=cp)//we also use (profit>=0)
    {if (sp>cp)
    printf("the seller has made profit and of %d",profit);
    else
    printf("the seller has made no profit no loss");
    }
    else 
    printf("the seller has incurred loss and of %d",loss);
    return 0;
}