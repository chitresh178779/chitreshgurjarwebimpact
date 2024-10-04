#include<stdio.h>
#include<string.h>
int main() {
    char username[8];
    while (1)
    {
        scanf("%s",&username);
        
        if(strlen(username)==8){
            break;
        }
        printf("ATLEAST 8 CHARACTERS LONG\n");
    }
    
    
    return 0;
}