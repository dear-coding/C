#include <stdio.h>
#include <math.h>

#define PI 3.141592654

int main() {

        // Cartesian coordinates
        double x;
        double y;
        
        // Polar coordinates
        double r;
        double phi;  

        // Read Cartesian coordinates from the user
        printf("Enter Cartesian coordinates (x, y): ");
        scanf("%lf %lf", &x, &y);

        // Convert to polar coordinates
        r = sqrt(x*x + y*y);
        phi = atan2(y, x);  // atan2 is better than atan for handling quadrants correctly
        phi = phi*180/PI;  // convert to degrees

        // Print the result
        printf("Polar coordinates (r, phi): (%.2f, %.2f)\n", r, phi);

        return 0;
}