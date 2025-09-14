/*take integer input and print
 the absolute value of that integer*/
 #include<stdio.h>
 int main ()
 {int n;
    printf("enter a integer :");
    scanf("%d",&n);
    if(n>=0)
    printf("the absolute value is %d",n);
    else{
        n=n*-1;
        printf("the absolute value is %d",n);
    }
    return 0 ;
 }