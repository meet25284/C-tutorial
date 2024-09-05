#include <stdio.h>

int main()
{
    int price[3];
    printf("enter the price of first:");
  scanf("%d", &price[0]);
  
   printf("enter the price of second:");
  scanf("%d", &price[1]);
  
   printf("enter the price of third:");
  scanf("%d", &price[2]);
  
  int totprice= price[0] + price[1] + price[2];

  printf("the total price is:%d and gst add:%d",totprice, totprice + totprice*18/100);

  return 0;
}