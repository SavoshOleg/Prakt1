#include <stdio.h>

int main() {
    int t1, t2, t3;
    printf("Enter three values:\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    double total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;
    double cake_eating_time = 1.0 / total_time;

    printf("Time required to eat the cake: %.2f\n", cake_eating_time);

    return 0;
}
