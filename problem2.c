#include <stdio.h>
int main()
{
   /*
     problem 2// even fibonacci sequence:
     Each new term in the Fibonacci sequence is generated by adding the previous two terms.
     By starting with 1 and 2, the first 10 terms will be:
                   1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
     By considering the terms in the Fibonacci sequence whose values do not exceed four million,
     find the sum of the even-valued terms.
  */


    int a = 1, b = 2, c = 0, sum = 0;

    while (b <= 4000000)
    {
       if (b % 2 == 0)// checking if the term is even and incrementing the sum
        {
            sum += b;
        }
         
         //updating the values of a, b, c
        c = a + b;
        a = b;
        b = c;
    }

    printf("%d\n", sum);
    
    return 0; 

}