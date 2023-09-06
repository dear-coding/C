/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

int main() {

        // Read in the sum of money
        int sum;
        printf("Enter the sum of money: ");
        scanf("%d", &sum);

        // Initialize the counter for the number of notes
        int minNumOfNotes = 0;

        // Calculate the number of notes of each denomination
        minNumOfNotes = minNumOfNotes + sum / 100;
        sum = sum % 100;
        minNumOfNotes = minNumOfNotes + sum / 50;
        sum = sum % 50;
        minNumOfNotes = minNumOfNotes + sum / 10;
        sum = sum % 10;
        minNumOfNotes = minNumOfNotes + sum / 5;
        sum = sum % 5;
        minNumOfNotes = minNumOfNotes + sum / 2;
        sum = sum % 2;
        minNumOfNotes = minNumOfNotes + sum;

        // Print the result
        printf("The smallest number of notes needed is: %d\n", minNumOfNotes);

  return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.