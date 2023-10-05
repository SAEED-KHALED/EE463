#include <stdio.h>

int main() {
    int monthNumber;

    printf("Enter a month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber == 1) {
        printf("January\n");
    } else if (monthNumber == 2) {
        printf("February\n");
    } else if (monthNumber == 3) {
        printf("March\n");
    } else if (monthNumber == 4) {
        printf("April\n");
    } else if (monthNumber == 5) {
        printf("May\n");
    } else if (monthNumber == 6) {
        printf("June\n");
    } else if (monthNumber == 7) {
        printf("July\n");
    } else if (monthNumber == 8) {
        printf("August\n");
    } else if (monthNumber == 9) {
        printf("September\n");
    } else if (monthNumber == 10) {
        printf("October\n");
    } else if (monthNumber == 11) {
        printf("November\n");
    } else if (monthNumber == 12) {
        printf("December\n");
    } 
   return 0;
}
