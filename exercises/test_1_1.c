//
// Created by john on 9/4/20.
//

#include <stdio.h>

int main(char args[])
{
    int ch;
    ch = getchar();
    while (ch != EOF)
    {
        putchar(ch);
        ch = getchar();
    }
}