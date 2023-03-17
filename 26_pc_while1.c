#include <stdio.h>

int main()
{
    char letter = 'a';
    
    while(letter != 'q')
    {
        //fflush(stdin);
        scanf(" %c", &letter);
        printf("The character you typed is: %c\n", letter);
    }
    
    return 0;
}
