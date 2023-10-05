#include <stdio.h>

int main() {
    char name[100];
    int age;
    char address[100];
    printf("Enter your name: ");
    scanf("%99[^\n]%*c", name); 
    printf("Enter your age: ");
    scanf("%d", &age);

    getchar();

    printf("Enter your address: ");
    scanf("%99[^\n]%*c", address); 

    printf("\nPersonal Information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);

    return 0;
}
