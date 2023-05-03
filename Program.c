// If marks obtained are input through the keyboard . write a program to find a percentage.



#include<stdio.h>
#include<conio.h>
void main()
{
    float n,m,pr;
    printf ("\n Enter any number : \n");
    scanf ("%f %f", &n, &m);
    /* Formula of Percentage*/
    pr = n*100/m;
    printf (" Percentage = %f \n", pr);
    getch();
}
