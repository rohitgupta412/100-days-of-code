#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float difference; 
    float percentage;

    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        difference = sellingPrice - costPrice;
        percentage = (difference / costPrice) * 100;
        printf("Profit: %.2f\n", difference);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
    
        difference = costPrice - sellingPrice;
        percentage = (difference / costPrice) * 100;
        printf("Loss: %.2f\n", difference);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        
        printf("No Profit, No Loss.\n");
    }

    return 0;
}