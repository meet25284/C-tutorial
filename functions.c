#include <stdio.h>
#include <math.h>

void square(int l);
int main()
{int l;
printf("enter the value of length:");
scanf("%d",&l);
square(l);
    return 0;
}
void square(int l)
{
printf("the squre is :%d",l*l);

}