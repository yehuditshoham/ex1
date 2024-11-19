/******************
Name: Yehudit Shoham
ID: 212054985
Assignment:ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int num1;
  int position1;
  printf("Please enter a number:\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &position1);
  printf("The bit in position %d", position1);
  printf(" of number %d", num1);
  printf(" is: %d\n", (num1>>position1)&1);
  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
    int num2;
    int position2;
    int on = 0;
    int off = 0;
    printf("Please enter a number:\n");
    scanf("%d", &num2);
    printf("Please enter a position:\n");
    scanf("%d", &position2);
    on = num2|(1<<(position2));
    off = on-(1<<(position2));
    printf("Number with bit %d", position2);
    printf(" set to 1: %d\n", on);
    printf("Number with bit %d", position2);
    printf(" set to 0: %d\n", off);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int num3;
  int position3;
  int toggled = 0;
  printf("Please enter a number:\n");
  scanf("%d", &num3);
  printf("Please enter a position:\n");
  scanf("%d", &position3);
  toggled = num3^(1<<(position3));
  printf("Number with bit %d", position3);
  printf(" toggled: %d\n", toggled);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int num4;
  printf("Please enter a number:\n");
  scanf("%d", &num4);
  printf("%d\n", ((num4)&1)^1);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int num5 =0;
  int num6 =0;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num5);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num6);
  int sum = num5+num6;
  printf("The sum in hexadecimal: %X\n", sum);
  printf("The 3,5,7,11 bits are: %d",(sum>>3)&1);
  printf("%d",(sum>>5)&1);
  printf("%d",(sum>>7)&1);
  printf("%d\n",(sum>>11)&1);
  printf("Bye!\n");
  
  return 0;
}
