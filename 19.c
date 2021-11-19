#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char sym[]="g", sym1="h";
    bool symbol=true;
    int i;
    symbol = strchr(sym, '.');
    if (symbol==false) {
        printf("Whole number(1)\n");
        }
    if (symbol==true){
        printf("Real number(2)\n");
    }
   if (sym1>=0 && sym1<=127) {
        printf("Symbol can be transformed to digits (ASCII table)\n");
   }
   if (!(sym1>=0 && sym1<=127)) {
        printf("0\n");
   }
    printf("\n");
    return 0;
}