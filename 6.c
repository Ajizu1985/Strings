#include <stdio.h>
int main()
{
    char k='56';
    
    if (k>=48 && k <=57) {
        printf("Digit\n");
    }
    if (k>=65 && k<=90){ 
        printf("Lotin\n");
    }
    if (k>=97 && k<=122){ 
        printf("Lotin\n");
    } 
    else {
        printf("0\n");
    }
    return 0;
}
