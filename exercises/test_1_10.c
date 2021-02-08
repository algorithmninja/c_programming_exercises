//
// Created by john on 9/4/20.
//

#include <stdio.h>
#define LOW 0
#define TOP 400
#define STEP 20


// test1
int temp1()
{
    printf("%d",5/9);
    printf("\n");
    printf("%f",5.0/9.0);

    return 0;
}

// printf decimal, float number
int temp2()
{
    int c;
    c = getchar();
    float d;
    d = (float)c;
    printf("%d\n", c);
    printf("%f", d);

    return 0;
}

// while loop
int temp3()
{
    int a = 0;
    while (a < 400)
    {
        printf("%d\n", a);
        a += 20;
    }
    return 0;
}

// for loop
int temp4()
{
    int i = 0;

    for (i = LOW; i <= TOP; i++)
        printf("%d\n", i);
    return 0;
}

int temp5()
{
    int i;
    if ((i = getchar())== EOF)
        printf("%d", i);
    return 0;
}

int main()
{
    // temp1();
    // temp2();
    // temp3();
    // temp4();
    temp5();
}