// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 5, 2022
// This program asks for a number
// between 1 and 9, and then tells
// you if your guess was correct

#include <iostream>

int main() {
    // Declaring variables
    int userGuess;

    // Declaring constants
    const int CORRECT_GUESS = 7;

    // Input
    std::cout << "This program asks for a number\n";
    std::cout << "between 1 and 9, and then tells\n";
    std::cout << "you if your guess was correct\n";
    std::cout << "\n";
    std::cout << "Enter a number between 1 and 9: ";
    std::cin >> userGuess;

    // Process
    if (userGuess == CORRECT_GUESS) {
        // output
        std::cout << "Your guess is correct!";
    } else {
        std::cout << "Your guess is incorrect";
    }
}
