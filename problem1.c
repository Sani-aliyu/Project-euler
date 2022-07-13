#include <stdio.h>

int main()
{
    /**problem 1 - sum of all multiples of 3 or 5 below 1000
     * 
     * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
     * Find the sum of all the multiples of 3 or 5 below 1000.
     */

    int sum = 0; // creating and initializing the sum variable to store the sum of the multiples of 3 or 5 below 1000
    
    /**
     * The following for loop will iterate through all the numbers below 1000 and check if the number is a multiple of 3 or 5.
     * If it is, the sum variable will be incremented by the number.
     */
    for(int x = 0; x < 1000; x++){
        if ((x % 3 == 0) || (x % 5 == 0))
        {
            sum+=x;
        }
    }
      printf("%d",sum); //printing the sum of the multiples of 3 or 5 below 1000 after exiting the for loop

    return 0;
}
