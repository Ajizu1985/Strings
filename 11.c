#include <stdio.h>
#include <string.h>
int main()
{
    char car[100];
    printf("Enter car: ");
    fgets(car, sizeof(car), stdin);
    printf("Car:");
    puts (car);
    return 0;
}
