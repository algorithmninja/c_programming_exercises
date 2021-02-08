//
// Created by john on 9/3/20.
//

#include <stdio.h>

int cut(int p)
{
    p = p + 2;
    printf("%d", p);
    return p;
}
// count digits, white space, others
int main()
{
    // part 1
    int p = 3;
    cut(p);
    printf("%d", p);
    return 0;


    // part 2
    int c, i, nwhite, nother;
    int ndigit[10] = {0};

    nwhite = nother = 0;
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c =='\t')
            ++nwhite;
        else
            ++nother;
    for (i = 0; i< 10; i++)
        printf("%d",ndigit[i]);
    printf("%d, %d", nwhite, nother);

}