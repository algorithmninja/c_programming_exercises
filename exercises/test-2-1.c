//
// Created by john on 12/2/20.
//

#include <stdio.h>

void conversion1()
{
    char c;
    while ((c = getchar()) != EOF)
        printf("%d-%c", c, c);
}

void tmp1()
{
    int d = 300;
    printf("%c-%d\n", d, d);
    int e = 94;
    printf("%c-%d\n", e, e);
}

int main()
{
    //conversion1();
    tmp1();
    return 0;
}