/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

int main() {

    int number;
    int reversed = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    /**original variable acts as the backup of the number input by the user. 
     * It will be used later in the program to check if the reversed number 
     * is equals to the number input by the user or not.
    */
    int original = number;

    /**To find the reverse of a five-digit number, 
     * continually extract the last digit of the number 
     * using the modulus operator (%) and multiply it with 
     * some power of 10 according to that digit place in the reversed number, 
     * and then finally add the result to the reversed number.
     * Then divide the original number by 10 to remove the last digit. 
     */

    // reverse the number
    reversed += number%10*10000;  // Last digit extracted and placed at 1st place in the reversed number.
    number /= 10;  // last digit removed and the number variable is updated.
    reversed += number%10*1000;  // Last 2nd digit extracted and placed at 2nd place in the reversed number.
    number /= 10;  // 2nd digit removed and the number variable is updated.
    reversed += number%10*100;  // Last 3rd digit extracted and placed at 3rd place in the reversed number.
    number /= 10;  // 3rd digit removed and the number variable is updated.
    reversed += number%10*10;  // Last 4th digit extracted and placed at 4th place in the reversed number.
    number /= 10;  // 4th digit removed and the number variable is updated.
    reversed += number;  // First digit placed at 5th place in the reversed number.

    // check if original and reversed are equal
    if(original == reversed)
        printf("The original and reversed numbers are equal.\n");
    else
        printf("The original and reversed numbers are not equal.\n");

    return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.