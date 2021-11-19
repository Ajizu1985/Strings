#include <stdio.h>
#include <string.h>
int main()
{
    int n=1, i;
    char k[20]="Hello Dolly";
    printf("%zu\n", strlen(k));

    for(i=0; i<n; i++) 
    {
        printf("%c\n", k[0]);
        printf("%c\n", k[10]);
    }
    return 0;
}