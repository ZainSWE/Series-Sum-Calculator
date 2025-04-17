#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void title();
int arithmeticSeries(int n, int i, int d);
int geometricSeries(int n, int i, int r);

int main() {

    int n, i, d, r, sum, choice;

    printf("Select Calculation\n");
    printf("1. Arithmetic Series\n");
    printf("2. Geometric Series\n");
    printf("3. Factorial\n");
    printf("4. Fibonacci\n");
    printf("5. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
	case 1:
 	    title("Arithmetic Series");

	    printf("enter 'n': ");
	    scanf("%d", &n);
	    printf("enter 'i': ");
	    scanf("%d", &i);
	    printf("enter 'd': ");
	    scanf("%d", &d);

	    sum = arithmeticSeries(n, i, d);

	    printf("sum is: %d\n", sum);
	    break;

	case 2:
	    title("Geometric Series");

	    printf("enter 'n': ");
	    scanf("%d", &n);
	    printf("enter 'i': ");
	    scanf("%d", &i);
	    printf("enter 'r': ");
	    scanf("%d,", &r);

	    sum = geometricSeries(n, i, r);

	    printf("sum is: %d\n", sum);
	    break;

	case 3:
	    title("Factorial");
	    break;

	case 4:
	    title("Fibonacci");
	    break;

	case 5:
	    title("Exited Program");
	    break;
    }

    return 0;
}

int arithmeticSeries(int n, int i, int d) {

    int sum = 0;

    for (int j = 0; j < i; j++) {
	sum = sum + n;
	n = n + d;
    }

    return sum;
}

int geometricSeries(int n, int i, int r) {

    int sum = 0;

    for (int j = 0; j < i; j++) {
	sum = sum + n;
	n = n * r;
    }

    return sum;
}

void title(char *text) {

    int length = strlen(text);

    for (int i = 0; i < length + 4; i++) {
	printf("#");
    }
    printf("\n");

    printf("# %s #\n", text);

    for (int i = 0; i < length + 4; i++) {
	printf("#");
    }
    printf("\n\n");
}
