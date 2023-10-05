#include <stdio.h>

int main(){
	int A, B, C;
	int Max, Min;
	double Average;

	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &A, &B, &C);

	Max = Min = A;
	Average = A + B + C;

	for (int i = 1; i < 3; i++) {
		printf("enter number %d: ", i + 1);
		scanf("%d", &A);

		if (A > Max) { Max = A; }
		if (A < Min) { Min = A;}
		Average += A;
	}
	Average /= 3.0;

        printf("Max: %d\n", Max);
	printf("Min: %d\n", Min);
	printf("Average: %.3lf\n", Average);
	return 0;
}
