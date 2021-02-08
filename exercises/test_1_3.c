//
// Created by john on 8/14/20.
//

#include <stdio.h>

int main()
{
    // int c;
    int c;
    c = getchar();
    while(c != EOF)
    {
        putchar(c);
        printf("%d", c);
        c = getchar();
    }
}
