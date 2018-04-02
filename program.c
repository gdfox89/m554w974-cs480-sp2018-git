#include <stdio.h>

int main(void)
{
    double current_number, previous_number = 0;                         /* entered by user */
    int determiner = 1;                                                 /* determines result */

    printf("Entering a 0 will terminate the sequence of input values.");
    
    printf("\nEnter a number: ");
    scanf("%lf", &current_number);
    
    while (current_number != 0)
        
{
      previous_number = current_number;
    
      printf("Enter a number: ");
      scanf("%lf", &current_number);
    
      if (previous_number > current_number && current_number != 0) determiner = 0;
}
    
    if (determiner == 0)
    {
        printf("\nRESULT: NO\n");
    }
    
    if (determiner == 1)
    {
        printf("\nRESULT: NON-DECREASING\n");
    }
    
    return 0;
}
