/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

int main() {
    
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        } else
            printf("%d is a leap year.", year);
    } else
        printf("%d is not a leap year.", year);

    return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.