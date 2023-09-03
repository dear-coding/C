/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>
#include <math.h>

int main() {

        // Read the angle in degrees
        double angle;
        printf("Enter the value of the angle in degrees: ");
        scanf("%lf", &angle);

        // Convert the angle to radians
        /** M_PI is a constant defined in the math.h header file 
         * that represents the value of pi. */ 
        angle = angle*M_PI/180;

        // Calculate the trigonometric ratios
        double sine = sin(angle);
        double cosine = cos(angle);
        double tangent = tan(angle);

        // Calculate the reciprocal trigonometric ratios
        double cosec = 1 / sine;
        double sec = 1 / cosine;
        double cot = 1 / tangent;

        // Print the results
        printf("The sine of the angle is %f\n", sine);
        printf("The cosine of the angle is %f\n", cosine);
        printf("The tangent of the angle is %f\n", tangent);
        printf("The cosecant of the angle is %f\n", cosec);
        printf("The secant of the angle is %f\n", sec);
        printf("The cotangent of the angle is %f\n", cot);

  return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.