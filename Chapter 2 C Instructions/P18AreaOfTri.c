/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>
#include <math.h>

int main() {

        double a;
        double b;
        double c;
        double s;
        double area;

        printf("Enter the lengths of the three sides of the triangle: ");
        scanf("%lf %lf %lf", &a, &b, &c);

        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("The area of the triangle is %.2lf\n", area);

        return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.