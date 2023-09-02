/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>
#include <math.h>

int main() {
        
        // Declare variables for temperature (t) and wind velocity (v)
        double t;
        double v;

        // Prompt user to enter values for t and v
        printf("Enter temperature (in Fahrenheit): ");
        scanf("%lf", &t);
        printf("Enter wind velocity (in mph): ");
        scanf("%lf", &v);

        // Calculate wind chill factor using the provided formula
        double wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

        // Print the wind chill factor
        printf("Wind chill factor: %.2lf\n", wcf);

        return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.