#include <stdio.h>
#include <string.h>
int main()
{
    int length, i, n=0;
    char name[15] = "schwarzenegger";
    length = strlen(name);
    printf("%d\n",  length);
    printf("Before: %s\n", name);
    for(i=13; i>=n; i--) {
    printf("After: [%d]=%c\n",  i, name[i]);
    }
    return 0;
}