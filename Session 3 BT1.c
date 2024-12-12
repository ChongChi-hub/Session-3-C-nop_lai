#include <stdio.h>

int main()
{
    char name[50]; //50 character limit
    
    printf("Enter your name: ");
    scanf("%49s", name); //avoid array overflow
    
    printf("Hello %s", name);

    return 0;
}
