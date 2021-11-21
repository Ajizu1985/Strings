#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
unsigned long length, i;
char strng[] = "056340456574057";
length = strlen(strng);

for(i=0; i<=length; i++){
  printf("%c\t", strng[i]);
}
return 0;
}
