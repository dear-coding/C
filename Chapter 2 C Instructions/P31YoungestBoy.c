/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

int main() {

    int ageOfRam;
    int ageOfShyam;
    int ageOfAjay;

    printf("Enter the age of Ram: ");
    scanf("%d", &ageOfRam);

    printf("Enter the age of Shyam: ");
    scanf("%d", &ageOfShyam);

    printf("Enter the age of Ajay: ");
    scanf("%d", &ageOfAjay);

    if (ageOfRam < ageOfShyam) {
        if(ageOfRam < ageOfAjay)
            printf("Ram is the youngest\n");
        else
            printf("Ajay is the youngest\n");
    } 
    else
        if(ageOfShyam < ageOfAjay)
            printf("Shyam is the youngest\n");

    return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.