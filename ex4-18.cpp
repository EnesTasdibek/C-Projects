
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#
#include<iostream>
#include<iomanip>
using namespace std;
#include<stdio.h>

int main()
{
    int fah, f1, f2;
    float cel;

    printf("Enter starting fahrenheit:  ");
    scanf("%d", &f1);
    printf("Enter ending fahrenheit:  ");
    scanf("%d", &f2);

    printf("%-12s%-12s\n", "Fahrenheit", "Celsius");
    for (fah = f1; fah <= f2; fah++)
    {
        cel = (fah - 32) * 5 / 9.0;
        printf("%6d %+016.3f\n", fah, cel);


    }

    return 0;
}