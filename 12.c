#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="00818678900T-=p9";
    int i, count=0;
    unsigned long length = strlen(str);
    printf("Length:%zu\n", length);

    for(i=0; str[i]!='\0'; i++){
    if(str[i]>='0' && str[i]<='9'){
            count++;
    }}
        printf("Amount: %d\n", count);
    return 0;
}