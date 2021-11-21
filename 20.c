#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
unsigned long length;
int i;
char strng[] = {'5', '6', '3', '4', '0', '4', '5', '6', '5', '7', '4'};
length = strlen(strng);
printf("%lu\n", length);
for(i=0; i<=length; i++){
  printf("%c\t", strng[i]);
}
return 0;
}
