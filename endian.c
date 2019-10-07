/* CSCE 3600.001 09/23/2019
    Group 14:
        Adil Afroze
*/

#include "main.h"

//Endian Function
long long int endian(long long int usrInput)
{
 //Variable Declaration- Used Different variables to seperate bytes
  long long int b0, b1, b2, b3, swap;
 
  //Seperating the bytes by using bitwise operators 
  b3 = (usrInput & 0x000000FF);
  b2 = (usrInput & 0x0000FF00);
  b1 = (usrInput & 0x00FF0000); 
  b0 =  (usrInput & 0xFF000000);
  
  //Swapping bytes using bitwise operations- Byte B0 and B3, Byte B1 and B2
  swap = (b3 << 24) | (b2 << 8) | (b1 >> 8) | (b0>>24);
  return(swap);
  
}

