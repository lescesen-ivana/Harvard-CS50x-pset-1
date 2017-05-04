
#include <stdio.h>
#include <cs50.h>



int main(void)
{
 
int height, row, space, hash, spacetwo, hashtwo;
do
 {   printf("Height:");
     height = GetInt();
    
 }
while (height < 0  ^ height > 23);



 for (row = 0; row < height; row++)
 {
      for(space = 0; space < (height - 1 - row); space++)
      {
        printf(" "); 
        
       }  
      
     for (hash = 0 ; hash < (row + 1); hash++)
       {
       printf("#");
       }
       
     for(spacetwo = 0; spacetwo < 2; spacetwo++)
      {
        printf(" "); 
        
       }
       
       for (hashtwo = 0 ; hashtwo < (row + 1); hashtwo++)
       {
       printf("#");
       }
       
        printf("\n");
}


  }

 
