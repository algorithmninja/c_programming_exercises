//
// Created by john on 8/14/20.
//

#include <stdio.h>

int main()
{
    /* first test program
    double nc;
    for(nc=0;getchar()!=EOF;++nc)
        ;
    printf("%.0f", nc);
    */
    int c, nl;
    nl = 0;
    while((nc= getchar()) != EOF)
    {
        if(nc == "\n")
            ++nl;
    }
    printf("%d", nl);
    return 0;
}