#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int m;
    printf("enter the value of m:");
    scanf("%d",&m);
    
    for (int i = m*10;i >= 0; i=i-n){
        printf("%d \n",i);

        
    }
   return 0;
     
}

    

