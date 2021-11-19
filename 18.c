#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="SchwarZeneGGer";
    int i;
    unsigned long length = strlen(str);
    printf("Length:%zu\n", length);

    for(i=0; str[i]!='\0'; i++){
    if((str[i]>='A' && str[i]<='Z')) {
        printf("Small:%c\n", str[i]+32);
    }  
    }
    printf("\n\n");
   for(i=0; str[i]!='\0'; i++){
    if((str[i]>='a' && str[i]<='z')) {
    str[i]-32; 
    printf("Big: %c\n", str[i]-32); 
    } 
    } 
    return 0;
}