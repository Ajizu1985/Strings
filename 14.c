#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="008186AD900T-=p9";
    int i, count=0;
    unsigned long length = strlen(str);
    printf("Length:%zu\n", length);

    for(i=0; i<=length; i++){
    if((str[i]>='A' && str[i]<='Z')) {
            count++;
    }}
        printf("Amount: %d\n", count);
    return 0;
}