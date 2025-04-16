#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void title();
int sequence(int n, int i);

int main() {

    int n, i, choice;

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

	    int sum = sequence(n, i);

	    printf("sum is: %d\n", sum);
	    break;

	case 2:
	    title("Geometric Series");
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

int sequence(int n, int i) {

    int sum = 0;

    for (int j = 0; j < i; j++) {
	sum = ((n - i + 1) / 2) * ((i + n));
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
