#include <stdio.h>

struct pair
{
    int fst;
    int snd;
};

void foo (int **pp1, int **pp2)
{
    int x = **pp1 - **pp2;
    **pp1 -= x;
    **pp2 += x;
    return;
}

int main(void)
{
    struct pair p1 = {1, 2};
    struct pair p2 = {3, 4};
    struct pair *pp1 = &p1;
    struct pair *pp2 = &p2;
    int *p3 = &pp1 -> snd;
    int *p4 = &pp2 -> fst;
    foo(&p4, &p3);
    printf("p1 = (%d, %d), p2 = (%d, %d)",
             p1.fst, p1.snd, p2.fst, p2.snd);
    return 0;
}
