//
// Created by john on 9/4/20.
//

#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char target[], char source[]);

int main()
{
    int len_current = 0;
    int len_max = 0;
    char line_current[MAXLINE];
    char line_longest[MAXLINE];

    while ((len_current = getline(line_current, MAXLINE)) > 0)
    {
        if (len_current > len_max)
        {
            len_max = len_current;
            copy(line_longest, line_current);
        }
    }
    if (len_max > 0)
    {
        printf("%s", line_longest);
    }
    return 0;
}

int getline(char line[], int maxline)
{
    int c, i;
    for (i=0; i<maxline-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(char target[], char source[])
{
    int i = 0;
    while ((target[i] = source[i] ) != 0)
        ++i;
}