#include <stdio.h>
int main()
{
    char k='b';
    
    if (k>=48 && k <=57) {
    printf("%c is Digit\n", k);
    }
    if (k>=65 && k<=90)
    { printf("%c is Lotin\n", k);
    }
    if (k>=97 && k<=122)
    { printf("%c is Lotin\n", k);
    }
    else {
        printf("0");
    }
    return 0;
}