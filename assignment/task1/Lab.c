#include <stdio.h>

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int size = 4;
    int totalPasswords = 0;

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (j != i) {
                for (int k = 0; k < 26; k++) {
                    if (k != i && k != j) {
                        for (int l = 0; l < 26; l++) {
                            if (l != i && l != j && l != k) {
                                printf("%c%c%c%c\n", alphabet[i], alphabet[j], alphabet[k], alphabet[l]);
                                totalPasswords++;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("\nTotal Passwords: %d\n", totalPasswords);

    return 0;
}