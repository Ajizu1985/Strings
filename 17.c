#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="SchwarZeneGGer";
    int i;
    unsigned long length = strlen(str);
    printf("Length:%zu\n", length);

    for(i=0; str[i]!='\0'; i++){
    if((str[i]>='a' && str[i]<='z')) {
         str[i]-32; 
        printf("Amount: %c\n", str[i]);
    }   
    }  
      
    return 0;
}
