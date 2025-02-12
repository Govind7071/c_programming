#include<stdio.h>
int main(){
    float km,feet,m,inch,cm;
    printf("enter the distance in km :");
    scanf("%f",&km);
    m=km*1000;
feet=km*3280.84;
inch=km*39370.079;
cm=km*100000;
printf("the distance in meter is : %f \n the distance in feet is : %f \n ",m,feet);
printf("the distance ininches is : %f \nthe distance in centimeters is : %f",inch,cm);
/*
printf("\nthe distance in inches is : %f",inch);
printf("\nthe distance in centimeter is : %f",cm);*/
return 0;
}