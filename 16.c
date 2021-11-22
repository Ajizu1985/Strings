#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="SchwarZeneGGer";
    int i;
    unsigned long length = strlen(str);
    printf("Length:%zu\n", length);

    for(i=0; i<=length; i++){
    if((str[i]>='A' && str[i]<='Z')) {
        printf("%c\n", str[i]+32);
    }   
    }  
      
    return 0;
}