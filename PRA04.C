//Program (4)
//Solution(2)- User defined values

#include <stdio.h>

int main()
{
    // Declaration and initialization of the variable
    float radius, area;

    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("\nArea of Circle = %f", area);

    return 0;
}
