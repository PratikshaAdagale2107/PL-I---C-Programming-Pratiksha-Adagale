/*
Program (18) -> Write a program to accept elements of integer, float, and character arrays from the user
                and display the value and corresponding memory address of each array element.
*/

// Solution (2): User define program - Using all types of loops -> Implicit way to write the program

#include <stdio.h>
#include <conio.h>

int main()
{
    int var1[5];
    float var2[5];
    char var3[5];
    int i, j, k;
    
    // --- Integer Array using For Loop ---
    for(i=0; i<=4; i++)
    {
        printf("Enter your integer value: ");
        scanf("%d", &var1[i]);
    }
    
    for(i=0; i<=4; i++)
    {
        printf("\nAt index %d", i);
        printf("\nthe value of var1 is %d", var1[i]);
        printf("\nand address is %d \n", &var1[i]);
    }
    
    printf("\n\n");
    
    // --- Float Array using While Loop ---
    j=0;
    while(j<=4)
    {
        printf("Enter your Float/decimal value: ");
        scanf("%f", &var2[j]);
        j++;
    }
    
    j=0;
    while(j<=4)
    {
        printf("\nAt index %d", j);
        printf("\nthe value of var2 is %f", var2[j]);
        printf("\nand address is %d \n", &var2[j]);
        j++;
    }
    
    printf("\n\n");
    
    // --- Character Array using Do-While Loop ---
    k=0;
    do
    {
        printf("Enter your character value: ");
        scanf(" %c", &var3[k]);
        k++;
    }while(k<=4);
    
    k=0;
    do
    {
        printf("\nAt index %d", k);
        printf("\nthe value of var3 is %c", var3[k]);
        printf("\nand address is %d \n", &var3[k]);
        k++;
    }while(k<=4);
    
    getch();
}