#include <stdio.h>

int main() {
    enum TrafficLight {
        RED,
        YELLOW,
        GREEN
    };

    enum TrafficLight current_light;
    int input;

    printf("Enter the current traffic light status (0=RED, 1=YELLOW, 2=GREEN): ");
    // Take integer input from the user
    if (scanf("%d", &input) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    current_light = (enum TrafficLight)input; // Cast input to the enum type

    switch (current_light) {
        case RED:
            printf("Action: Stop\n");
            break;
        case YELLOW:
            printf("Action: Wait\n");
            break;
        case GREEN:
            printf("Action: Go\n");
            break;
        default:
            printf("Unknown traffic light state.\n");
    }

    return 0;
}
