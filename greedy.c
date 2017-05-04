
#include <cs50.h>
#include <stdio.h>
#include <math.h>


 
  
int main(void)
{   
int cents;
int quarters;
int dimes;
int nickeles;
int leftover;

int coincount= 0; 
float dollars;

    do
        {   printf("How much change do you need: ");
            dollars =  get_float();
        }
   while (dollars <= 0);
   cents = round(dollars * 100);
    
    // Quarters
    quarters = cents / 25;
    leftover = cents % 25;
    
    // Dimes
    dimes = leftover / 10;
    leftover = leftover % 10;
    
    // Nickels
    nickeles = leftover / 5;
    leftover = leftover % 5;
    
    // Leftover at this stage is pennies
coincount = quarters + dimes + nickeles + leftover;


/*   while (cents >= 25) 
    {
     coincount +=  1;
     cents -= 25;
    }
    
     while (cents >= 10) 
    {
     coincount += 1;
     cents -= 10;
    }
    
     while (cents >= 5) 
    {
     coincount += 1;
     cents -= 5;
    }
    
     while (cents >= 1) 
    {
     coincount += 1;
     cents -= 1;
    }
*/



 printf("%i\n",coincount);

}
