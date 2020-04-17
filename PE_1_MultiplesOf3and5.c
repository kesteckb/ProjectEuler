// Problem #1 from ProjectEuler.net archives

/* If we list all the natural numbers below 10 that are multiples
or 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000. */

#include <stdio.h>

main()
{
    int sum;

    for (int i = 1; i < 1000; i++)
    {
        // Update 'sum' with the addition of each number 'i' that is
        // divisible by 3.
        if (i % 3 == 0)
        {
            sum = sum + i;
            printf("\n The current sum is %d", sum);
        }

        // Update 'sum' with the addition of each number 'i' that is
        // divisible by 5, but not 3.
        else if ((i % 3 != 0) && (i % 5 == 0))
        {
            sum = sum + i;
            printf("\n The current sum is %d", sum);
        }
    }

    printf("\n\nThe sum of all multiples of 3 and 5");
    printf(" below 1000 is: %d\n\n\n", sum);

    return 0;
}
