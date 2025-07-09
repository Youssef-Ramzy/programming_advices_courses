#include <iostream>
#include <cstdio>
#include "mylib.h"
using namespace std;
using namespace mylib;

int main()
{
    int Page = 1, TotalPages = 10;
    int Num1 = 5, Num2 = 10;
    
    Sepretor();
    printf("The page number is: %d \n", Page);
    printf("You are in the page number %d of %d \n", Page, TotalPages);
    printf("The page number is %0*d \n", 2, Page);
    printf("The page number is %0*d \n", 3, Page);
    printf("The page number is %0*d \n", 4, Page);
    Sepretor();


    float PI = 3.14159265359;

    printf("PI is %.3f \n", PI); // you can use this metnod or the other one but this is best for your lazyiness.
    printf("PI is %.*f \n", 2, PI);
    printf("PI is %.*f \n", 3, PI);
    printf("PI is %.*f \n", 4, PI);
    printf("PI is %.*f \n", 5, PI);
    printf("PI is %.*f \n", 6, PI);


    float X = 7.0, Y = 9.0;
    printf("\n The float division is %.3f / %.3f = %.3f \n\n", X, Y, X / Y);

    double D = 12.45;
    printf("The double value is %.3f \n", D);
    printf("The double value is %.ff \n", D);
    Sepretor();

    char Name[] = "Youssef Bassem Ramzy";
    char School[] = "Programming Advices";

    printf("Hi, %s how are you today:) \n", Name);
    printf("Welcom to %s School \n", School);

    char C = 'H';

    printf("This is %2c \n", C);
    printf("This is %3c \n", C);
    printf("This is %4c \n", C);
    printf("This is %5c \n", C);

    return 0;
}