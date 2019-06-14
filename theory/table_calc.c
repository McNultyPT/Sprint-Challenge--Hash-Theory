#include <stdio.h>

// exercise 3

// int main(void) {
//   int bools[] = {0, 1};

// 	for (int A = 0; A < 2; A++) {
// 		for (int B = 0; B < 2; B++) {
// 			for (int C = 0; C < 2; C++) {
// 				printf("A: %d, B: %d, C: %d, Result: %d\n", bools[A], bools[B], bools[C], !(bools[A] || bools[B]) || ( (bools[A] || bools[C]) && !(bools[B] || !bools[C]) ));
// 			}
// 		}
// 	}
// 	return 0;
// }

// stretch

int main(void) {
    int bools[] = {0, 1};

    for (int A = 0; A < 2; A++) {
        for (int B = 0; B < 2; B++) {
            for (int C = 0; C < 2; C++) {
                int sum = (A && B && C) || (!A && !B && C) || (!A && B && !C) || (A && !B && !C);
                int carry = (A && B && C) || (!A && B && C) || (A && !B && C) || (A && B && !C);

                printf("A: %d    B: %d    C: %d    carry: %d   sum: %d\n", bools[A], bools[B], bools[C], carry, sum);
            }
        }
    }
    return 0;
}

// gcc -Wall -Wextra -o table_calc table_calc.c

