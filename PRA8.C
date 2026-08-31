Program(8)
Solution(2)-User defined values

#include <stdio.h>// Includes the standard input-output library for printf and scanf 
int main()
{

// Declaration and Initialization of the variables
int a,b,temp;

printf("\n Enter first number: ");
scanf("%d",&a);

printf("\n Enter second number: ");

scanf("%d",&b);

temp = a;

a = b; 
b = temp;

printf("\n After swapping: \n");

printf("\n First number= %d \n",a);

printf("\n Second number= %d \n",b);

return 0;// Indicates that the program executed successfully

}
