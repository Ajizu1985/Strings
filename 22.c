#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
unsigned long length;
int i, sum=0;
char strng[] = "563fjhf4";
length = strlen(strng);
for(i=0; i<=length; i++){
if (strng[i]>'0' && strng[i] <='9'){
    sum += strng[i]-'0';
}
}
printf("%d\n", sum);
return 0;
}