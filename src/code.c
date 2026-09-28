//char *AUTHOR_NAME        = (char *) "Karla Nelson";
//char *AUTHOR_AUTHORSHIP  = (char *) "I acknowledge that I have worked on this
// assignment independently, except where explicitly noted and referenced.
// Any collaboration or use of external resources has been properly cited.
// I am fully aware of the consequences of academic dishonesty and agree to
// abide by the university's academic integrity policy.";

// code.c — student implementation only

/*
 * To use the function prototypes from code.h, you must include the header:
 *   #include "code.h"
 * 
 * You also need stdio.h for any input/output operations.
 *   #include <stdio.h>
 * 
 * Write your function implementations below each TODO.
 */
#include "code.h"
#include <stdio.h>


/*
 * ============================================================================
 * FUNCTION: find_max
 * ============================================================================
 * 
 * Find the maximum value in an array.
 * Start with the first element and compare with the rest.
 */
int find_max(int arr[], int n)
{
    // TODO: Your implementation here
    
    int i = 0;
    int rslt = arr[i];

    for(i; i <= n; i++)
    {
        if(rslt < arr[i])
        {
            rslt = arr[i];
        }

        if((i + 1) == n)
        {
            return rslt;
        }
    }

    

}

/*
 * ============================================================================
 * FUNCTION: find_min
 * ============================================================================
 * 
 * Find the minimum value in an array.
 * Start with the first element and compare with the rest.
 */
int find_min(int arr[], int n)
{
    // TODO: Your implementation here

    int i = 0;
    int rslt = arr[i];

    for(i; i <= n; i++)
    {
        if(rslt > arr[i])
        {
            rslt = arr[i];
        }

        if((i + 1) == n)
        {
            return rslt;
        }
    }
}

/*
 * ============================================================================
 * FUNCTION: sum_array
 * ============================================================================
 * 
 * Sum all elements in the array.
 * Use a running total and add each element.
 */
long sum_array(int arr[], int n)
{
    // TODO: Your implementation here

    int i = 0;
    long rslt = 0;

    for(i; i <= n; i++)
    {
        if((i) == n)
        {
            return rslt;
        }

        else
        {
            rslt = rslt + arr[i];
        }
    }
}

/*
 * ============================================================================
 * FUNCTION: average
 * ============================================================================
 * 
 * Calculate the average of a float array.
 * Sum all elements and divide by the count.
 */
double average(float arr[], int n)
{
    // TODO: Your implementation here

    int i = 0;
    double rslt = 0;

    for(i; i <= n; i++)
    {
        if((i) == n)
        {
            rslt = rslt / n;
            return rslt;
        }

        else
        {
            rslt = rslt + arr[i];
        }
    }
}

/*
 * ============================================================================
 * FUNCTION: linear_search
 * ============================================================================
 * 
 * Find the INDEX (position) of a target value in an array.
 * 
 * Why WHILE loop? Because we don't know how many elements we'll check
 * before finding the target (or reaching the end). It could be the first
 * element, or the last element, or not there at all!
 * 
 * Search for a target value in the array.
 * Return the index if found, -1 if not found.
 * Use while loop because you don't know when to stop.
 */
int linear_search(int arr[], int n, int target)
{
    // TODO: Your implementation here

    int rt = 1;
    int i = 0;
    int rslt = 0;

    while(rt == 1)
    {
        if(arr[i] != target && i <= n)
        {
            i++;
        }

        if(arr[i] == target)
        {
            return i;
        }

        if(i > n)
        {
            return -1;
        }
    }
    
}


/*
 * ============================================================================
 * FUNCTION: heron
 * ============================================================================
 * 
 * Calculate the square root of a number using Heron's method.
 * 
 * Start with an initial guess (x/2), then repeatedly improve it:
 *   next_guess = (guess + x/guess) / 2.0
 * 
 * Stop when the difference between consecutive guesses is smaller than epsilon.
 * Remember: no abs() or fabs() - use: if (x < 0) x = -x;
 */
double heron(double x, double epsilon)
{
    // TODO: Your implementation here     

    int rt = 1;
    double guess = x / 2;
    double guess2 = (guess + (x / guess)) / 2;

    while(rt == 1)
    {
        if((guess - guess2) > epsilon)
        {
            guess = guess2;
            guess2 = (guess2 + (x / guess2)) / 2;

        }

        if((guess - guess2) < epsilon)
        {
            return guess2;
            
        }
    }

}