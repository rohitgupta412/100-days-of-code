#include <stdio.h>
#include <string.h>

struct Point {
    int x;
    int y;
};

// Function to compare two Point structs
int arePointsEqual(struct Point p1, struct Point p2) {
    if (p1.x == p2.x && p1.y == p2.y) {
        return 1; // True, they are identical
    } else {
        return 0; // False, they are different
    }
}

int main() {
    struct Point pt1, pt2;

    printf("Enter coordinates for Point 1 (x y): ");
    scanf("%d %d", &pt1.x, &pt1.y);

    printf("Enter coordinates for Point 2 (x y): ");
    scanf("%d %d", &pt2.x, &pt2.y);

    // Using the function to compare
    if (arePointsEqual(pt1, pt2)) {
        printf("\nThe two points are identical.\n");
    } else {
        printf("\nThe two points are different.\n");
    }
    
   
    return 0;
}
