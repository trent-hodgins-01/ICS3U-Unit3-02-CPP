// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/17/21
// This is a guessing game program
// The user enters in a number between 1 and 9

#include <iostream>

int main() {
    // this function checks to see if the user guessed the correct number(5)
    const float correct_number = 5;

    float guessed_number;

    // input
    std::cout << "Guess a number between 0 and 9 (integer): ";
    std::cin >> guessed_number;
    std::cout << "" << std::endl;

    // process and output
    if (guessed_number == correct_number) {
        std::cout << "You Guessed Correctly!" << std::endl;
    } else {
            std::cout << "You Guessed Wrong!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
