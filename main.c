/*
 * This program is to calculate the factorial of any given number by the user. Usually the factorial is calculated by
 * multiplying the selected number by all the numbers that came before it up to 1 (The zero is obviously excluded).
 * In this program we used the symbol *= which multiplies and then assigns the value after the equal sign.
 * We also used the unsigned variable because we want to work only with positive integers.
 *
 * Problem Analysis.
 * Problem: Write a program which allows us to calculate the factorial of any given number. The factorial of n number
 * is the product of multiplying such number by all the numbers which came before it.
 * Input: The number of which the user wants to find the factorial.
 * Calculations: n * (n-1) * (n-2) ... while n!=0
 * Outputs: Factorial of n
 *
 * Algorithm.
 * 1 Begin
 * 2 Ask the user for the number they want the factorial of
 * 3 Verify that the number is a positive integer
 * 4 Specify that if n=0 then factorial=1
 * 5 Specify that if n=1 then factorial=1
 * 6 If n!= 0 or 1, then multiply n by al the numbers before it
 * 7 Display the factorial
 * 8 End
 *
 * Author: Soraya Lizeth Maqueda Gutiérrez
 * Date: 06.09.2018
 * Contact: soraya_maqueda@hotmail.com
 */

#include <stdio.h>

int main() {
    unsigned int n; //This is the variable for the number that the user introduces.
    unsigned long int factorial=1; //This is the variable for saving the product of the numbers as they progress on the loop.
    //The default value is 1 for two reasons: The starting value for calculating any number's factorial is 1, and the identity of multiplication is 1.

    //Here I ask the user for the number and save it on the variable n.
    printf ("Give me the number of which you want to calculate its factorial: ");
    scanf ("%i", &n);

    //Here the variable of control (counter) is declared. It is assigned the value of n so that each time that the loop repeats itself
    //it substracts one to that value and so the multiplication will be n * (n-1), as long as n-1 != 0.
    for (int i=n; i>0; i--) {
        factorial *= i;
    }
    //Here I tell the user the result of the multiplication.
    printf ("The factorial of %i is: %i ", n, factorial);

    return 0;
}