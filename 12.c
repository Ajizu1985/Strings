#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char car[15];
    int i, j, n;
    int length;

    printf("Enter car: ");
    fgets(car, sizeof(car), stdin);
    length = strlen(car);
    printf("Enter n: ");
    scanf("%d", &n);

    //printf("%zu", length);
    for (i=0;i<=length;i++){
    printf("%c", car[i]);
    for(j=0;j<n;j++){
      printf(" * ");
    }
    }
    return 0;
}