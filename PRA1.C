1.Program(1)- Write a program to make use of basi I/O functions using different data types.
Solution(1)-predefined values

#include <stdio.h>//Include standard input-output library for using printf()
int main()
{
    //Variable Declarations
    int rollnum;
    float per;
    char grade;
    //Assigning Predefined Values to the variables
    rollnum=55;
    per=88.88;
    grade='A';
    //Output Section:Displaying the information on the console
    printf("____Student Information_____\n");
    printf("\n Roll Number:%d",rollnum);
    printf("\n Percentage:%f",per);
    printf("\n Grade:%c",grade);
    return 0;//Indicates successful execution of the program
}
