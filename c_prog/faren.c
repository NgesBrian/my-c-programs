/* A program that prints a Fahrenheit -> Celsius conversion table */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
float fahrenheit, celsius;
printf("Fahrenheit -> Celsius\n\n");
fahrenheit = 0.0;
while(fahrenheit <= 300.0)
{
celsius = (fahrenheit-32)*5/9;
printf("%3.2f  %3.2f\n", fahrenheit, celsius);
fahrenheit = fahrenheit + 20.0;
}
return EXIT_SUCCESS;
}
