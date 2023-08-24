/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include<stdio.h>

int main() {

        float km;
        float m;
        float foot;
        float inch; 
        float cm;

        printf("Enter the distance b/w any two cities in km: ");
        scanf("%f", &km);

        m = 1000*km;  // 1 Kilometer = 1000 Meters
        cm = 100*m;  // 1 Meter = 100 Centimeters
        inch = 2.54*cm;  // 1 inch = 2.54 Centimeters
        foot = 12*inch;  // 1 Foot = 12 Inches

        printf("Distance b/w the two cities in meters is %.2f.\n", m);
        printf("Distance b/w the two cities in feet is %.2f.\n", foot);
        printf("Distance b/w the two cities in inches is %.2f.\n", inch);
        printf("Distance b/w the two cities in centimeters is %.2f.", cm);

    return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.