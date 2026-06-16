#include <stdio.h>

// Define the structure
struct Player {
    char name[50];
    int score;
};

// Function declaration taking a structure pointer
void updateScore(struct Player *p, int points) {
    // Use the -> operator to access and modify data via pointer
    p->score += points; 
}

int main() {
    // Initialize structure variable
    struct Player player1 = {"Alice", 1500};

    printf("Before: %s has %d points\n", player1.name, player1.score);

    // Pass the structure by reference using the & operator
    updateScore(&player1, 350);

    // The original structure is directly modified
    printf("After:  %s has %d points\n", player1.name, player1.score);

    return 0;
}


/******************************************/
//#include <iostream>
//#include <string>

struct Car {
    std::string brand;
    int year;
};

// Function modifies the original struct directly
void upgradeCar(Car &c) {
    c.year += 1; // Direct access using dot operator
}

int main() {
    Car myCar = {"Toyota", 2023};
    
    // Pass the object naturally without any special symbols like &
    upgradeCar(myCar); 
    
    std::cout << "New Year: " << myCar.year; // Outputs 2024
    return 0;
}
