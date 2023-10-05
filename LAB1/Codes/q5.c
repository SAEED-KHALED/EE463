#include <stdio.h>

int main() {
    double hours;
    printf("Enter the number of hours: ");
    scanf("%lf", &hours);

    if (hours >= 0) {
        double seconds = hours * 3600.0;
        printf("%.3lf hours is equal to %.3lf seconds.\n", hours, seconds);
    } else {
        printf("Please enter a non-negative number of hours.\n");
    }

    return 0;
}






