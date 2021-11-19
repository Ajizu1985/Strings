#include <stdio.h>
int main()
{
   int a, i, n=10;
    printf("Enter the digit: ");
    for (i=0; i<=n; i++)
    {
    scanf("%d", &a);
    printf("%c\n", (a-1));
    printf("%c\n", (a+1));
    }
    return 0;
}