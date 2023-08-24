/* C Programming By Dear Coding
 * Author: Vandana @Dear-Coding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://www.youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include<stdio.h>

int main() {

        float basicSalary;
        float dearnessAllowance;
        float houseRentAllowance;
        float grossSalary;

        printf("Enter Ramesh's Basic Salary: ");
        scanf("%f", &basicSalary);

        /**dearnessAllowance = 40% of basicSalary
         * dearnessAllowance = (40/100)*basicSalary 
         * dearnessAllowance = 0.4*basicSalary */ 
        dearnessAllowance = 0.4*basicSalary;

        /**houseRentAllowance = 20% of basicSalary
         * houseRentAllowance = (20/100)*basicSalary 
         * houseRentAllowance = 0.2*basicSalary */ 
        houseRentAllowance = 0.2*basicSalary;

        grossSalary = basicSalary + dearnessAllowance + houseRentAllowance;

        printf("Dearness Allowance = %.2f\n", dearnessAllowance);
        printf("House Rent Allowance = %.2f\n", houseRentAllowance);
        printf("Gross Salary = %.2f", grossSalary);

        return 0;
}

// You have better code??
// Don't keep it to just yourself, 
// Share it wtih the Coding World.
PUSH YOUR CHNAGES HERE!!💜💜💜
// The chnages will be visible on your profile.
IT WILL BE VERY HELPFUL IN YOUR CODING INTERVIEW.
// Also, Knowledge only increases by sharing.