
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{  
    
long long cardnumber;
long long  secondtolastdigit;
long long digitsremaining;
int checksum;
int diggitstomultyply = 0;
int diggetstoadd = 0;

    do
         {   printf("Enter your card number: \n");
                    cardnumber = get_long_long();
         }
     
  while (cardnumber < 0);


    // double every other digit starting w/ 2nd to last
// then sum the individunal digits of these products
//we need to dived by ten in  order to to get to secind to las digit 
//In C, when you divide one int by another int, you don't get the exact decimal result
//Instead, it chops off the fractional part in order to get another int
//Yes, towards zero to be precise 12345/10 = 1234
  for (secondtolastdigit = cardnumber / 10; secondtolastdigit > 0; secondtolastdigit /= 100) {

      if ( 2 * (secondtolastdigit % 10) > 9 )
        {  //accses the first digit in a two digit number
            diggitstomultyply += (2 * (secondtolastdigit % 10)) / 10;
            
            //acsess the second digit in a two digit number
            diggitstomultyply += (2 * (secondtolastdigit % 10)) % 10;
        }
        else
        diggitstomultyply += 2 * (secondtolastdigit % 10 ); 
  }     
 // sum every other digit starting w/ the the last
  for (digitsremaining = cardnumber; digitsremaining > 0; digitsremaining /= 100) {
      
  diggetstoadd += digitsremaining % 10;
      
  }
  checksum = diggitstomultyply + diggetstoadd;
  
  if ( checksum % 10 == 0 )
    {   
        if ( (cardnumber >= 340000000000000 && cardnumber < 350000000000000) || (cardnumber >= 370000000000000 && cardnumber < 380000000000000) )
            printf("AMEX\n");
        else if ( cardnumber >= 5100000000000000 && cardnumber < 5600000000000000 )
            printf("MASTERCARD\n");
        else if ( (cardnumber >= 4000000000000 && cardnumber < 5000000000000) || (cardnumber >= 4000000000000000 && cardnumber < 5000000000000000) )
            printf("VISA\n");
        else
            printf("INVALID\n");
    }
   else
            printf("INVALID\n");

}
