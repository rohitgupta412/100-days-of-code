#include <stdio.h>
#include <string.h>

int main() {
    char originalDate[] = "15/04/2025";
    char newDate[15]; 
    int day, month, year;

    
    const char *monthAbbreviations[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    
    sscanf(originalDate, "%d/%d/%d", &day, &month, &year);


    sprintf(newDate, "%02d-%s-%d", day, monthAbbreviations[month], year);

    printf("Original date: %s\n", originalDate);
    printf("New date: %s\n", newDate);

    return 0;
}