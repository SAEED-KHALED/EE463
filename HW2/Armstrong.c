#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Saeed alabdullah
//1935229
// This code gives you till 26 Armstrongs, and it would give me an error if i increased it


int numDigits(int input);
int isArmstrong(int number);

int main() {
    int count = 0;
    int number = 1;

    while (count < 20) {
        if (isArmstrong(number)) {
            printf("%d is an Armstrong number.\n", number);
            count++;
        }
        number++;
    }

    return 0;
}

int numDigits(int input) {
    int count = 0;
    while (input > 0) {
        count++;
        input = input / 10;
    }
    return count;
}

int isArmstrong(int number) {
    int n = numDigits(number);
    int temp = number;
    int sum = 0;
    int originalNumber = number;

    while (number != 0) {
        int remainder = number % 10;
        int term = remainder;

        for (int i = 1; i < n; i++) {
            term *= remainder;
        }

        sum += term;
        number = number / 10;
    }

    return (sum == temp);
}
