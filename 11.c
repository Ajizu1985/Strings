#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char Company[20];
    int i, j, n;
    int length;

    printf("Enter Company: ");
    fgets(Company, sizeof(Company), stdin);
    length = strlen(Company);
    printf("Enter n: ");
    scanf("%d", &n);

    //printf("%zu", length);
    for (i=0;i<=length;i++){
    printf("%c", Company[i]);
    for(j=0;j<n;j++){
      printf("  ");
    }
    printf("\t");
    }
    return 0;
}