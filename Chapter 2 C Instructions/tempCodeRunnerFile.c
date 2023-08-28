#include<stdio.h>

int main() {
        // Declare a variable to store the number entered by the user.
        int number;
        /* Declare another variable sum to calculate the sum 
        and store the result in sum variable itself. */
        int sum = 0;

        // Saying the user to enter a five-digit number.
        printf("Enter a Five-Digit Number: ");
        // Taking input from the user and storing it in number variable.
        scanf("%d", &number);
        
        /* Declare one more variable temp to store the value of number variable
         so that the number, which user entered, does not get lost. As further,
         we have to display the number on the screen.      
        */
        int temp = number;

        // Let's say user entered 39246
        // 39246/10  Q=3924  R=6
        // 3924/10  Q=392  R=4
        // 392/10  Q=39  R=2
        // 39/10  Q=3  R=9
        // 3
        // int sum = 0; // 6, 10, 12, 19, 22

        // Last Digit: 6
        sum = sum + temp%10;  // Extract the last digit and Add it to sum and Store the result in sum.
        temp = temp / 10; // temp = 3924  // last digit removed
        // Last 2nd Digit: 4
        sum = sum + temp%10;  // Extract the 2nd digit and Add it to sum and Store the result in sum.
        temp = temp / 10; // temp = 392  // 2nd digit removed
        // Last 3rd Digit: 2
        sum = sum + temp%10;  // Extract the 3rd digit and Add it to sum and Store the result in sum.
        temp = temp / 10; // temp = 39  // 3rd digit removed
        // Last 4th Digit: 9
        sum = sum + temp%10;  // Extract the 4th digit and Add it to sum and Store the result in sum.
        temp = temp / 10; // temp = 3  // 4th digit removed
        // Last 5th Digit: 3
        sum = sum + temp;  // Extract the 5th digit and Add it to sum and Store the result in sum.

        // Displaying the sum of digits on screen.
        printf("Sum of Digits of %d = %d", number, sum);

        return 0;
}
