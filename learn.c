#include <stdio.h>

int main()
{
int marks;
printf("enter the value of marks:");
scanf("%d",&marks);

if(marks <= 30) 
{
    printf("failed");
}
if(marks >= 31 && marks <= 40) 
{
    printf("D grade");
}
if(marks >= 41 && marks <= 50) 
{
    printf("C grade");
}
if(marks >= 51 && marks <= 60) 
{
    printf("B grade");
}
if(marks >= 61 && marks <= 70) 
{

    printf("A grade");
}
if(marks >= 71){
    printf("A+ grade");
}
   return 0;
}