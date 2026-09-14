Program(4)
Solution(2)- User defined values

#include <stdio.h>//Includes standard Input-Output library for printf()
int main()
{
//Declaration and initialization of the variable
float radius, area;

printf("\n Enter the radius of the circle:");
scanf("%f,&radius);
area = (3.14*radius*radius);
printf("\n Area of Circle = %f", area);
//Indicate that the program completed successfully
return 0;
}
