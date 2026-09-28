/*
 * main.c - Sandbox for testing
 * 
 * To use the functions you implemented in code.c, you must include the header:
 *   #include "code.h"
 * 
 * This tells the compiler where to find the function prototypes.
 * Without this include, the compiler won't know about your functions!
 */

#include <stdio.h>
#include "code.h"


int main(void)
{
    int list1[3] = {1, 3, 2};
    float list2[3] = {1, 3, 2};
    double ep = __DBL_EPSILON__;
    double x = 5;

    int r1 = find_max(list1, 3);
    int r2 = find_min(list1, 3);
    long r3 = sum_array(list1, 3);
    double r4 = average(list2, 3);
    int r5 = linear_search(list1, 3, 2);
    double r6 = heron(x, ep);

    return 0;
}