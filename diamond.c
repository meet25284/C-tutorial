#include <stdio.h>
#include <math.h>
int main()
{
    
int row,b,c,space;
printf("enter the the no. row");
scanf("%d",&row);


for(b=1;b<=row;b++){
    for(space=1;space<=row-b;space++){
        printf("meet");
    }
    
    for(c=1;c<=2*b-1;c++){
    printf("*");
}printf("\n");}
    
  for(b=row;b>=1;b--)  {
    for(space=1;space<=row-b;space++){ 
        printf(" ");
    } 
    for(c=1;c<=2*b-1;c++){
        printf("*");
    }printf("\n");
  }
  
  
    




    return 0;
}