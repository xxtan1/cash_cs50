#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    int cents;
    
    do
    {
        float dollars = get_float("How much change is owed?:");
        cents = round(dollars * 100);
    }
    while (cents < 0);
    
    int quarters = cents / 25;//25cent
    int dimes = (cents % 25) / 10;//using modula to find remainder //10cent
    int nickels = ((cents % 25) % 10) / 5;//5cent
    int pennies = ((cents % 25) % 10) % 5;//1cent
    int total =  quarters + dimes + nickels + pennies;//total number of coins used

    printf("%i\n", total);
}
