Program(6)
Solution(2)- User defined values

#include <stdio.h>// Includes the standard input-output library for printf and scanf

int main()
{
    // Declaration and Initialization of the variables
    int num1, num2, num3, total;
    float average;

    printf(" Enter first number: ");
    scanf("%d", &num1);
    printf(" Enter second number: ");
    scanf("%d", &num2);
    printf(" Enter third number: ");
    scanf("%d", &num3);

    total = (num1 + num2 + num3);
    
    // Changing 3 to 3.0 fixes the integer division bug
    average = total / 3.0; 
    
    printf("\n Average= %f", average);
    // Indicates that the program executed successfully
    return 0;
}
