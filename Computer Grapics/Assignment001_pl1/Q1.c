#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d;
    printf("Enter Marks in Maths :");
    scanf("%f",&a);
    printf("\nEnter Marks in Physics :");
    scanf("%f",&b);
    printf("\nEnter Marks in Chemistry :");
    scanf("%f",&c);

    d=a+b+c;


    if(a>=65 && b>= 55 && c>=50 && d>= 180)
    {
        printf("\nYou are eligible for University Admission.\n");
    }
    else
    {
        printf("\nYou are 'NOT' eligible for University Admission.\n");

    }



    return 0;
}
