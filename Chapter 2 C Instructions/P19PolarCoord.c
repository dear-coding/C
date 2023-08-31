/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

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

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.