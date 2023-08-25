#include<stdio.h>

int main() {

        float degF;
        float degC;

        printf("Enter the Temperature of a City in Degree Fahrenheit: ");
        scanf("%f", &degF);

        degC = (degF - 32)/1.8;

        printf("Temperature of the City in Degree Centigrade is %.2f.", degC);
        return 0;
}