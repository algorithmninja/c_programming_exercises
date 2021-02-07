//
// Created by john on 1/25/21.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdlib.h>

/**
 *
typedef struct ListNode {
    int val;
    struct ListNode * next;
};

 *
 */

struct point {
    float x;
    float y;
};

double pointer_distance(struct point *a, struct point *b){
    float r;
    r = sqrtf((b->x - a->x)*(b->x - a->x)+(b->y - a->y)*(b->y - a->y));
    printf("%f", r);
    return r;
}

int main(int argc, char *argv[]){
    struct point *a, *b;
    struct point pa, pb;
    a = pa;
    b = pb;
    //a = malloc(sizeof(struct point));
    //b = malloc(sizeof(struct point));
    a->x = 3.0;
    a->y = 3.0;
    b->x = 4.0;
    b->y = 4.0;
    pointer_distance(a,b);
}