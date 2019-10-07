//Name: Het Devan Patel, EUID: HDP0033, Recitation Section: 207
//c function that handels right rotatation given a input number and the number of rotatations to be preformed
#include <stdio.h>
void rotate(unsigned int inputNumber)
{
  //stores value for right shift
  int rightShiftValue;
  //stores value for left shift
  int leftShiftValue;
  //stores value for bit diffrence 32-number of rotatations
  int bitDiffrenceValue;
  //stores the final rotated value
  int rotatedValue;
  //number of rotatations
  int numberOfRotations;
  //bit size is 32
  int bitSize=32;
  //jump to thw prompt for user input for number of rotatations
  prompt_two:
  //prompt user for number of rotations
  printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
  //scan user input for rotation number
  scanf("%d", &numberOfRotations);
  //check if number of rotatation input is greater than zero and less than one
  if((numberOfRotations>=0)&&(numberOfRotations<=31))
  {
  //shift the number right n number of times	
  rightShiftValue=inputNumber>>numberOfRotations;
  //subtract 32 minus the number of rotations
  bitDiffrenceValue=bitSize-numberOfRotations;
  //shift the input number by the value of (32-number of rotations)to the left
  leftShiftValue=inputNumber<<bitDiffrenceValue;
  //we do a logical OR of the right shifted value and the left shifted value
  rotatedValue=rightShiftValue|leftShiftValue;
  //output input number, number of rotations, and the new number after it has been rotated n number of times	
  printf("%u rotated by %u position gives: %u\n", inputNumber,numberOfRotations,rotatedValue);
  }
  else
  {
  //if conditions are not met display a error message for number of rotatations
  printf("Error input of rotatation is not in range! please input again \n");
  //jump to the second prompt for user input for number of rotatations
  goto prompt_two;
  }
}
  

