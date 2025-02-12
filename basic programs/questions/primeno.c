#include<stdio.h>
int main (){
    int i,j,count;
    printf("prime no. between 1 and 300 are:\n");
    for(i=2;i<300;i++){
count=1;
       for(j=2;j<+i;j++)
        {
            if(i%j==0){
            count=0;
            break;
            }
        
        }
       if(count) 
       printf("\t%d",i);
    }
    return 0;
}