#include <stdio.h>
#include <math.h>
int main()
{ 
    
int row,b,c,space;
printf("enter the the no. row");
scanf("%d",&row);

for(b=1;b<=row;b++){
    

    for(c=1;c<=2*b-1;c++){
       printf("*"); 
    }
    printf("\n");
}
    return 0;
}