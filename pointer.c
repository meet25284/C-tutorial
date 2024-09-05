#include <stdio.h>

int main()
{ 
    char *ptr;
    char alph;

    for(alph = 'A'; alph <= 'Z'; alph++){
        ptr = &alph;
        printf("%c\n");
    }
    return 0;
}