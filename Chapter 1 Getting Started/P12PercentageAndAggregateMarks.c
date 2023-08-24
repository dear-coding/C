/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include<stdio.h>

int main() {

        float marksOfSub1;
        float marksOfSub2;
        float marksOfSub3;
        float marksOfSub4;
        float marksOfSub5;
        float aggregateMarks;
        float percentageMarks;

        printf("Enter the marks obtained in five different subjects out of 100: ");
        scanf("%f %f %f %f %f", &marksOfSub1, &marksOfSub2, &marksOfSub3, &marksOfSub4, &marksOfSub5);

        aggregateMarks = marksOfSub1 + marksOfSub2 + marksOfSub3 + marksOfSub4 + marksOfSub5;
        percentageMarks = (aggregateMarks/500)*100;

        printf("Aggregate Marks obtained by the Student: %.2f\n", aggregateMarks);
        printf("Percentage Marks obtained by the Student: %.2f%%", percentageMarks);

    return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.