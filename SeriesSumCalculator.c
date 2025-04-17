#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototypes
void title();
int arithmeticSeries(int n, int i, int d);
int geometricSeries(int n, int i, int r);

//main
int main() {

    int n, i, d, r, sum, choice;

    //menu selection
    printf("Select Calculation\n");
    printf("1. Arithmetic Series\n");
    printf("2. Geometric Series\n");
    printf("3. Factorial\n");
    printf("4. Fibonacci\n");
    printf("5. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    //menu selection case handling
    switch(choice) {

	//option 1:
	case 1:
 	    title("Arithmetic Series");
	    //user-input
	    printf("enter 'n': ");
	    scanf("%d", &n);
	    printf("enter 'i': ");
	    scanf("%d", &i);
	    printf("enter 'd': ");
	    scanf("%d", &d);

	    sum = arithmeticSeries(n, i, d);

	    printf("sum is: %d\n", sum);
	    break;

	//option 2:
	case 2:
	    title("Geometric Series");
	    //user-input
	    printf("enter 'n': ");
	    scanf("%d", &n);
	    printf("enter 'i': ");
	    scanf("%d", &i);
	    printf("enter 'r': ");
	    scanf("%d,", &r);

	    sum = geometricSeries(n, i, r);

	    printf("sum is: %d\n", sum);
	    break;

	//option 3:
	case 3:
	    title("Factorial");
	    break;

	//option 4:
	case 4:
	    title("Fibonacci");
	    break;

	//option 5:
	case 5:
	    title("Exited Program");
	    break;
    }

    return 0;
}

//arithmetic series calculator
int arithmeticSeries(int n, int i, int d) {

    int sum = 0;

    //formula:
    for (int j = 0; j < i; j++) {
	sum = sum + n;
	n = n + d;
    }

    return sum;
}

//geometric series calculator
int geometricSeries(int n, int i, int r) {

    int sum = 0;

    //formula:
    for (int j = 0; j < i; j++) {
	sum = sum + n;
	n = n * r;
    }

    return sum;
}

//custom-title box
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
