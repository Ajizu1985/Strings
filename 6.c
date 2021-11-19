#include <stdio.h>
int main()
{
    char k='56';
    
    if (k>=48 && k <=57) {
        printf("Digit\n", k);
    }
    if (k>=65 && k<=90){ 
        printf("Lotin\n", k);
    }
    if (k>=97 && k<=122){ 
        printf("Lotin\n", k);
    } 
    else {
        printf("0\n");
    }
    return 0;
}