4. Write a C program to swap two numbers using temporary variables
Program(7)
Solution(1)-Predefined values

#include<stdio.h>// Includes the standard input-output library for printf
int main()

{

// Declaration and Initialization of the variables
int a,b,temp;

a = 111;

b = 222;

printf("\n Before swapping:");

printf("\n a = %d, b = %d \n",a,b);

temp = a;

a = b;

b = temp;

printf("\n After swapping: ");

printf("\n a = %d, b = %d \n",a,b);

return 0;// Indicates that tha program executed successfully

}
