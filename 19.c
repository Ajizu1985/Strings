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
   for(i=0; i<1; i++){
        printf("Symbol can be transformed into digits (ASCII table)=%d\n", sym[0]);
   }
    for(i=0; i<1; i++){
        printf("Symbol cannot be transformed into digits (0)=%d\n", sym[0]);
   }
    return 0;
}