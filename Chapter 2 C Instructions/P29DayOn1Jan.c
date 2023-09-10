/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

int main() {

    int year;

    printf("Enter year: "); 
    scanf("%d", &year);

    /** totalDays stores the total number of days that have passed since the year 1.
     *  For example: if the user inputs the year 2020, totalDays will store 
     * the number of days that have passed since the year 1 up to the year 2019.*/
    long totalDays = (year-1)*365 + (year-1)/4-(year-1)/100+(year-1)/400;  
    /**👉year-1 = Number of YEARS that have passed since the year 1.
     * 👇(year-1)*365L
     * normalDays ~ Total number of days of normal years that have passed since the year 1.
     * 👇(year-1)/4-(year-1)/100+(year-1)/400
     * leapDays ~ Total number of days of leap years that have passed since the year 1.
     */

    /**Left days of the last week.
     * These DAYS have been PASSED in the previous year. 
     * Since the days of the week repeat every 7 days, the remainder will be between 0 and 6. */
    int leftDays = totalDays%7;
    
    /**It means The input year will START WITH a fresh new week.
     * And the FIRST DAY will be Monday. */
    if (leftDays == 0) 
        printf("The day on 1st January of the year %d: Monday\n", year);

    /**It means ONE DAY of the new week has been PASSED in the previous year. 
     * The input year will START WITH the SECOND DAY of the new week, i.e. Tuesday. */
    if (leftDays == 1)
        printf("The day on 1st January of the year %d: Tuesday\n", year);

    /**It means TWO DAYS of the new week have been PASSED in the previous year. 
     * The input year will START WITH the THIRD DAY of the new week, i.e. Wednesday. */
    if (leftDays == 2) 
        printf("The day on 1st January of the year %d: Wednesday\n", year);

    /**It means THREE DAYS of the new week have been PASSED in the previous year. 
     * The input year will START WITH the FOURTH DAY of the new week, i.e. Thursday. */
    if (leftDays == 3)
        printf("The day on 1st January of the year %d: Thursday\n", year);

    /**It means FOUR DAYS of the new week have been PASSED in the previous year. 
     * The input year will START WITH the FIFTH DAY of the new week, i.e. Friday. */
    if (leftDays == 4) 
        printf("The day on 1st January of the year %d: Friday\n", year);

    /**It means FIVE DAYS of the new week have been PASSED in the previous year. 
     * The input year will START WITH the SIXTH DAY of the new week, i.e. Saturday. */
    if (leftDays == 5)
        printf("The day on 1st January of the year %d: Saturday\n", year);

    /**It means SIX DAYS of the new week have been PASSED in the previous year. 
     * The input year will START WITH the SEVENTH DAY of the new week, i.e. Sunday. */
    if(leftDays == 6)
        printf("The day on 1st January of the year %d: Sunday\n", year);

    return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.