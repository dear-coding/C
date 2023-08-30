/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include<stdio.h>

int main() {

        // Declare a variable to store the number entered by the user.
        int number;
        /* Declare another variable reversed. It will be used while
        calulating the reverse number. And the final reversed number will be 
        stored in this reversed variable only. */
        int reversed = 0;

        // Prompt the user to enter a five-digit number
        printf("Enter a Five-Digit Number: ");
        // Read the number from the user and store it in number variable.
        scanf("%d", &number);

        /**To find the reverse of a five-digit number, 
         * continually extract the last digit of the number 
         * using the modulus operator (%) and multiply it with 
         * some power of 10 according to that digit place in the reversed number, 
         * and then finally add the result to the reversed number.
         * Then divide the original number by 10 to remove the last digit. 
         */

        // Let's say user entered 36975
        // number = 36975
        // 30000 + 6000 + 900 + 70 + 5
        // reversed = 57963
        // 50000 + 7000 + 900 + 60 + 3
        // 5*10000 + 7*1000 + 9*100 + 6*10 + 3

        // Last Digit: 5
        reversed = reversed + number%10*10000;  // reversed = 0 + 50000 = 50000  // Last digit placed at 1st place in the reversed number.
        number = number / 10;  // number = 3697  // last digit removed
        // Last 2nd Digit: 7
        reversed = reversed + number%10*1000;  // reversed = 50000 + 7000 = 57000  // Last 2nd digit placed at 2nd place in the reversed number.
        number = number / 10;  // number = 369  // 2nd digit removed
        // Last 3rd Digit: 9
        reversed = reversed + number%10*100;  // reversed = 57000 + 900 = 57900  // Last 3rd digit placed at 3rd place in the reversed number.
        number = number / 10;  // number = 36  // 3rd digit removed
        // Last 4th Digit: 6
        reversed = reversed + number%10*10;  // reversed = 57900 + 60 = 57960  // Last 4th digit placed at 4th place in the reversed number.
        number = number / 10;  // number = 3  // 4th digit removed
        // Last 5th Digit: 3
        reversed = reversed + number;  // reversed = 57960 + 3 = 57963 (Reversed!)  // First digit placed at 5th place in the reversed number.

        // Print the reversed number on screen.
        printf("Reversed Number is %d.", reversed);

        return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.