/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  // What bit
  printf("What bit:\n");
  /*Scesean two integers (reprnting number and a position)
  Print the bit in this position. */
  int number, position;

  printf("Please enter a number:\n");
  scanf("%d" , & number);

  printf("Please enter a position:\n");
  scanf("%d", & position);

  int bit = (number & (1 << position)) >> position;

  printf("The bit in position %d of number %d is: %d\n", position, number, bit);



  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  printf("Please enter a number:\n");
  scanf("%d" , & number);

  printf("Please enter a position:\n");
  scanf("%d", & position);

  int set1 = number | (1 << position);

  int set0 = number & (~(1 << position));

  printf("Number with bit %d det to 1: %d\n", position, set1);
  printf("Number with bit %d det to 0: %d\n", position, set0);


  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

  printf("Please enter a number:\n");
  scanf("%d" , & number);

  printf("Please enter a position:\n");
  scanf("%d", & position);

  int toggle = number ^ (1 << position);

  printf("Number with bit %d toggled: %d\n", position, toggle);


  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  printf("Please enter a number:\n");
  scanf("%d" , & number);
  int evenodd = ~(number & 1) & 1;
  printf("%d\n", evenodd);


  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int num1, num2;

  printf(("Please enter the first number (octal):\n"));
  scanf("%o", & num1);

  printf(("Please enter the second number (octal):\n"));
  scanf("%o", & num2);

  int sum = num1 + num2;

  printf("The sun in hexadecimal: %X\n", sum);

  int sum3 = (sum & (1 << 3)) >> 3;
  int sum5 = (sum & (1 << 5)) >> 5;
  int sum7 = (sum & (1 << 7)) >> 7;
  int sum11 = (sum & (1 << 11)) >> 11;

  printf("The 3,5,7,11 bits are: %d%d%d%d\n", sum3, sum5, sum7, sum11);

  printf("Bye!\n");
  
  return 0;
}
