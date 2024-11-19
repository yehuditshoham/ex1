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
  scanf("%d", &num1); // Read the number from user input
  printf("Please enter a position:\n");
  scanf("%d", &position1); // Read the bit position from user input
  printf("The bit in position %d", position1);

  // Print the bit in the given position by shifting the number and masking the bit.
  printf(" of number %d", num1);
  printf(" is: %d\n", (num1>>position1)&1); // Right shift 'num1' by 'position1' and mask with 1 to get the bit value
  
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
    scanf("%d", &num2); // Read the number from user input
    printf("Please enter a position:\n");
    scanf("%d", &position2); // Read the bit position from user input

    // Set the bit at the given position to 1 using bitwise OR.
    on = num2|(1<<(position2));

    // To set the bit to 0, we subtract the value (1 shifted to the given position).
    off = on-(1<<(position2));

    // Display the result with the bit set to 1 and then set to 0.
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
  scanf("%d", &num3); // Read the number from user input
  printf("Please enter a position:\n");
  scanf("%d", &position3); // Read the bit position from user input

  // Toggle the bit at the given position using XOR.
  toggled = num3^(1<<(position3));

  // Display the result after toggling the bit.
  printf("Number with bit %d", position3);
  printf(" toggled: %d\n", toggled);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int num4;
  printf("Please enter a number:\n");
  scanf("%d", &num4); // Read the number from user input

  // Use bitwise AND with 1 to check the last bit (least significant bit).
  // If the last bit is 1, the number is odd, otherwise it is even.
  printf("%d\n", ((num4)&1)^1);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int num5 =0;
  int num6 =0;

  printf("Please enter the first number (octal):\n");
  scanf("%o", &num5); // Read the first number in octal format
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num6); // Read the second number in octal format

  int sum = num5+num6;  // Add the two numbers together

  // Print the sum in hexadecimal format.
  printf("The sum in hexadecimal: %X\n", sum);

  // Print the bits at positions 3, 5, 7, and 11 of the sum.
  // Right shift the sum and mask with 1 to get the bit value at each position.
  printf("The 3,5,7,11 bits are: %d",(sum>>3)&1); // Bit at position 3
  printf("%d",(sum>>5)&1); // Bit at position 5
  printf("%d",(sum>>7)&1); // Bit at position 7
  printf("%d\n",(sum>>11)&1); // Bit at position 11


  printf("Bye!\n");
  
  return 0;
}
