#include<stdio.h>
 
int sum(int number){
    if(number == 1){
        return 1;
    }
    else
    {
        return (number + sum(number-1));
    }
}
int main()
{
  int num;
  printf("enter the number");
  scanf("%d",&num);
    printf("the sum of %d is %d",num,sum(num));
    return 0;
}