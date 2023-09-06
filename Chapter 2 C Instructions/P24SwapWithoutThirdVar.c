/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

// C Program to Swap Two Variables without using Third Variable.

#include <stdio.h>

int main() {

    // Declare two variables to store the numbers entered by the user.
        int a;
        int b;

        // Saying the user to enter the value of a.
        printf("Enter a: ");
        // Taking input from the user and storing it in variable a.
        scanf("%d", &a);
        // Saying the user to enter the value of b.
        printf("Enter b: ");
        // Taking input from the user and storing it in variable b.
        scanf("%d", &b);

        // Sample input
        // User: a = 7   b = 9
        /* To make you understand, I am calling a = 7 as "old a" 
        and b = 9 as "old b". As the value a and b is going to change
        during swapping process.
        */ 

        // Swapping
        // Remember👉 A variable can hold only one value at a time.

        a = a + b;  // a = 16
        b = a - b;  // b = 7  (b Swapped!)
        // a + b - b
        a = a - b;  // a = 9  (a Swapped!)
        // a - (a - b)
        // a - a + b

        // Displaying the swapped values of variables a and b.
        printf("After Swapping,\na = %d and b = %d", a, b);

  return 0;
}


// Below two programs are exactly same as above.
// I simply added different comments to explain you better.

#include<stdio.h>

int main() {

        // Declare two variables to store the numbers entered by the user.
        int a;
        int b;

        // Saying the user to enter the value of a.
        printf("Enter a: ");
        // Taking input from the user and storing it in variable a.
        scanf("%d", &a);
        // Saying the user to enter the value of b.
        printf("Enter b: ");
        // Taking input from the user and storing it in variable b.
        scanf("%d", &b);

        // Sample input
        // User: a = 7   b = 9
        /* To make you understand, I am calling a = 7 as "old a" 
        and b = 9 as "old b". As the value a and b is going to change
        during swapping process.
        */ 

        // Swapping
        // Remember👉 A variable can hold only one value at a time.

        // Now "new a" has "both a and b"
        a = a + b;  // a = 16
        // To store "old a" in b, remove b from "new a".
        // Now it is "new b", and it has "old a". (b Swapped!)
        b = a - b;  // b = 7
        // To store "old b" in a, remove "new b" from "new a".
        // Now it is "new new a", and it has "old b". (a Swapped!)
        a = a - b;  // a = 9

        // Displaying the swapped values of variables a and b.
        printf("After Swapping,\na = %d and b = %d", a, b);

        return 0;
}


#include<stdio.h>

int main() {

        // Declare two variables to store the numbers entered by the user.
        int a;
        int b;

        // Saying the user to enter the value of a.
        printf("Enter a: ");
        // Taking input from the user and storing it in variable a.
        scanf("%d", &a);
        // Saying the user to enter the value of b.
        printf("Enter b: ");
        // Taking input from the user and storing it in variable b.
        scanf("%d", &b);

        // Sample input
        // User: a = 7   b = 9
        /* To make you understand, I am calling a = 7 as "old a" 
        and b = 9 as "old b". As the value a and b is going to change
        during swapping process.
        */ 

        // Swapping
        // Remember👉 A variable can hold only one value at a time.

        a = a + b;  // a = 16
        // "new a" = "old a" + "old b"  ---Equation 1
        b = a - b;  // b = 7
        // "new b" = "new a" - "old b"
        // "new b" = "new a" - "old b"
        // "new b" = "old a" + "old b" - "old b"  ---Using Equation 1
        // "new b" = "old a"  (b Swapped!)  ---Equation 2
        a = a - b;  // a = 9
        // "new new a" = "new a" - "new b"
        // "new new a" = "old a" + "old b" - "old a"  ---Using Equation 1 and Equation 2
        // "new new a" = "old b"  (a Swapped!)

        // Displaying the swapped values of variables a and b.
        printf("After Swapping,\na = %d and b = %d", a, b);

        return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.