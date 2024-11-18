/******************
Name: Roei Wald
ID: 211589791
Assignment: ex1
*******************/
#include <stdio.h>

int main() {

  // What bit: Check the value of a specific bit at a given position in a given number.

  printf("What bit:\n");

  int number, position;

  printf("Please enter a number:\n");
  scanf("%d", & number);

  printf("Please enter a position:\n");
  scanf("%d", & position);


   /*
    Extract the bit at the given position:
    - Shift 1 to the position.
    - Apply bitwise 'and' to isolate the bit at the position.
    - Shift the result back to the LSB to get either 1 or 0.
    */
  int bit = (number & (1 << position)) >> position;

  printf("The bit in position %d of number %d is: %d\n", position, number, bit);


  // Set bit: Modify a specific bit in the given number to 1 or 0 //

  printf("\nSet bit:\n");

  printf("Please enter a number:\n");
  scanf("%d", & number);

  printf("Please enter a position:\n");
  scanf("%d", & position);

  /*
  Set the bit at the given position to 1:
   - Shift 1 to the position.
   - Use 'or' with the number to ensure the bit is set to 1.
   */
  int set1 = number | (1 << position);

    /*
    Set the bit at the given position to 0:
     - Shift 1 to the position.
     - Apply 'not' to invert it to all 1's except 0 at the position.
     - Use 'and' with the number to ensure the bit is set to 0.
     */
  int set0 = number & (~(1 << position));

  printf("Number with bit %d set to 1: %d\n", position, set1);
  printf("Number with bit %d set to 0: %d\n", position, set0);


  // Toggle bit: switch the value of a specific bit in a given number.
  printf("\nToggle bit:\n");

  printf("Please enter a number:\n");
  scanf("%d", & number);

  printf("Please enter a position:\n");
  scanf("%d", & position);

    /*
    Toggle the bit's value at the given position:
    - Shift 1 to the position.
    - Use 'xor' with the number to toggle the bit's value.
    */
  int toggle = number ^ (1 << position);

  printf("Number with bit %d toggled: %d\n", position, toggle);


  // Even - Odd: check if the number is even (by return 1) orr odd (by return 0).
  printf("\nEven - Odd:\n");

  printf("Please enter a number:\n");
  scanf("%d", & number);

  /*
   Check if the number is even (1) or odd (0):
    - Apply 'and' between the number and 1 to isolate the LSB.
    - Use 'not' ro invert the result.
      if LSB is 0 (even), the result becomes 1. and the opposite for odd.
    - Apply another 'and' with 1 to ensure the output is 1 for even, 0 for odd.
   */
  int even_odd = ~(number & 1) & 1;
  printf("%d\n", even_odd);


  // 3, 5, 7, 11: print the hexadecimal sum of two octadecimal given numbers. then, print the bits of the sum in positions 3, 5, 7, and 11.
  printf("\n3, 5, 7, 11:\n");

  int num1, num2;

  printf("Please enter the first number (octal):\n");
  scanf("%o", & num1); // Input the first number in octal form.

  printf("Please enter the second number (octal):\n");
  scanf("%o", & num2); // Input the second number in octal form.

  // The octaldecimal sum of the two  given numbers.
  int sum = num1 + num2;

  // Print the sum in hexadecimal form.
  printf("The sum in hexadecimal: %X\n", sum);

  // Extract bits at positions 3, 5, 7, and 11 by using 'and' and shift like task 1.
  int sum3 = (sum & (1 << 3)) >> 3;
  int sum5 = (sum & (1 << 5)) >> 5;
  int sum7 = (sum & (1 << 7)) >> 7;
  int sum11 = (sum & (1 << 11)) >> 11;

  printf("The 3,5,7,11 bits are: %d%d%d%d\n", sum3, sum5, sum7, sum11);

  // End of task.
  printf("Bye!\n");
  
  return 0;
}
