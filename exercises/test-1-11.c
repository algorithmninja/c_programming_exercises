//
// Created by john on 12/2/20.
//
//

#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int max)
{
    int i, c;
    for( i=0; i<max-1 && (c = getchar()) != EOF && c != '\n'; ++i )
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        line[++i] = '\0';
    }

    if ((c=getchar()) == EOF)
        return -1;
    else
        return i;

}

int getLine2(char line[], int max)
{
    int c, i;
    for (i = 0; (c = getchar()) > 0 && i < max-1 && c != '\n'; i++)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = '\n';
        line[i+1] = '\0';
        return i;
    }
    if (c == EOF)
        return -1;
}

void copyLine(char targetline[], char sourceline[])
{
    int i = 0;
    while ((targetline[i] = sourceline[i]) != '\0')
        i++;
}

void testipp()
{
    int i = 0;
    while (i++)
    {
        printf("%d", i);
        if (i == 3)
            break;
    }
    printf("%d", i);
}

void testppi()
{
    int i = 0;
    while(++i)
    {
        printf("%d", i);
        if (i == 3)
            break;
    }
    printf("%d", i);
}

int compareSample()
{
    testipp();
    printf("\n====================================\n");
    testppi();
    printf("\n====================================\n");
}

int main()
{
    compareSample();

    int len, max, c, i;
    len = max = 0;
    char longline[MAXLINE];
    char tmpline[MAXLINE];

    while((len = getLine2(tmpline, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copyLine(longline, tmpline);
        }
    }

    if (max > 0)
        printf("The longest line is %d characters : %s", max, longline);
    return 0;
}