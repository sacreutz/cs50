#include <stdio.h>
#include <cs50.h>
#include <math.h>

int get_number_coins(float change);

int main(void)
{
    float amount;
      do
   { 
       amount = get_float("Please enter a positive value: ");
   }
    while (amount < 0);

     int coins = get_number_coins(amount);
     printf("%i\n", coins);

  }


int get_number_coins(float change)
{
    int coins = 0;
    int cents = round(change * 100);  

   while (cents > 0) 
   {

    coins += cents/25;
    cents = cents % 25;    

    coins += cents/10;
    cents = cents % 10;

    coins += cents/5;
    cents = cents % 5;

    coins += cents/1;
    cents = cents % 1;

   } 
   return coins; 
}
