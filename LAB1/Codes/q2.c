#include <stdio.h>

int main() {
    char *gregorianmonth[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    char *hijrimonth[] = {
        "Muharram", "Safar", "Rabi' al-Awwal", "Rabi' al-Thani",
        "Jumada al-Awwal", "Jumada al-Thani", "Rajab", "Sha'ban",
        "Ramadan", "Shawwal", "Dhu al-Qi'dah", "Dhu al-Hijjah"
    };

    printf("gregorian month:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d. %s\n", i + 1, gregorianmonth[i]);
    }

    printf("\nHijri month:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d. %s\n", i + 1, hijrimonth[i]);
    }

    return 0;
}
