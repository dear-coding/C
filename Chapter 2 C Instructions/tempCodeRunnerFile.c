#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
  
        double L1; // Latitude of first place in degrees
        double G1; // Longitude of first place in degrees
        double L2; // Latitude of second place in degrees
        double G2; // Longitude of second place in degrees

        printf("Enter the latitude and longitude of the first place (in degrees): ");
        scanf("%lf %lf", &L1, &G1);

        printf("Enter the latitude and longitude of the second place (in degrees): ");
        scanf("%lf %lf", &L2, &G2);

        /**
         * The trigonometric functions in most programming languages, 
         * such as sin, cos, and acos, expect the input to be in radians rather than degrees. 
         * Therefore, when working with latitude and longitude values that are given in degrees, 
         * we need to convert them to radians before using them in these functions.
         */

        // Convert latitude and longitude from degrees to radians
        L1 = L1*PI/180;
        G1 = G1*PI/180;
        L2 = L2*PI/180;
        G2 = G2*PI/180;

        // Calculate the distance using the formula
        double distance = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));

        printf("Distance: %.2f nautical miles", distance);
  
  return 0;
}
