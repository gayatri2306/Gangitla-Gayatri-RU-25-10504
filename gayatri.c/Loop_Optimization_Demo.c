#include <stdio.h>

int main() {
    int totalSeconds, s;
    int h = 0, m = 0, sec = 0;
    int for_counter = 0, while_counter = 0;

    // Step 1 & 2: Get input
    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    // --- FOR LOOP APPROACH ---
    // Step 4: Logic - Subtracting 3600 for hours, 60 for minutes
    s = totalSeconds; 
    
    // Counting Hours
    for (; s >= 3600; h++) {
        s -= 3600;
        for_counter++;
    }
    // Counting Minutes
    for (; s >= 60; m++) {
        s -= 60;
        for_counter++;
    }
    sec = s; // Remaining seconds
    for_counter++; // Final step

    // Step 5: Print For Loop Results
    printf("\n[FOR LOOP RESULTS]\n");
    printf("Time: %dh:%dm:%ds\n", h, m, sec);
    printf("Total Iterations: %d\n", for_counter);

    // --- WHILE LOOP APPROACH ---
    // Step 6: Reset variables
    h = 0; m = 0; sec = 0; s = totalSeconds;
    
    // Step 7: Logic
    while (s >= 3600) {
        s -= 3600;
        h++;
        while_counter++;
    }
    while (s >= 60) {
        s -= 60;
        m++;
        while_counter++;
    }
    sec = s;
    while_counter++;

    // Step 8: Print While Loop Results
    printf("\n[WHILE LOOP RESULTS]\n");
    printf("Time: %dh:%dm:%ds\n", h, m, sec);
    printf("Total Iterations: %d\n", while_counter);

    // Step 9: Comparison
    if (for_counter == while_counter) {
        printf("\nComparison: Both loops used the same number of iterations.\n");
    }

    return 0;
}