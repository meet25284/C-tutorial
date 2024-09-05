#include<stdio.h>

int main()
{  
 int i;
  
  for (int i = 0; i <= 10; i++ ) {
    if(i==6){

      continue;
    }
    printf("%d \n", i);
  } 
  
  return 0;
}
