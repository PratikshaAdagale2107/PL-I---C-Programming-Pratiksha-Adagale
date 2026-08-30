#include<stdio.h>// Includes standard input-ouput library for using printf()
int main()
{
    //Variable Declarations
     int rollnum;
    float per;
    char grade;
    //Input Section
    printf("\n Enter Student Roll Number:");
    scanf(" %d",&rollnum);
    printf("\n Enter Student Percentage:");
    scanf(" %f",&per);
    printf("\n Enter Student Grade:");
    scanf(" %c",&grade);
    //output section
    printf("\n____Student Informtion____\n");
    printf("\n Roll Number is:%d",rollnum);
    printf("\n Percentage is:%f",per);
    printf("\n Grade:%c",grade);
    return 0;//indicates that the program completed successfully
}