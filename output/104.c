#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    long long totalSum = (long long)n * (n + 1) / 2;

    double potential_x_squared = totalSum; 

    
    double x_double = sqrt(potential_x_squared);

    if (x_double == (int)x_double) {
        printf("%d\n", (int)x_double);
    } else {
        printf("-1\n");
    }

    return 0;
}
