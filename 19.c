#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char strn1[]="g";
    bool symbol, val;
    symbol = strchr(strn1, '.');
    val = atoi(strn1);
        if (val==0){
        printf("Not a digit (0)\n");
        }
        if (symbol==0) {
        printf("Whole number(1)\n");
        }
        if (symbol==1){
        printf("Real number(2)\n");
    }
  
    
    return 0;
}
