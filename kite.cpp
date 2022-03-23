// Copyright 2022. MTHS
// Created by: Huzaifa Khalid
// Created on: March 2022
// This program calculates the perimeter of a kite
// with user input

#include <iostream>

int main() {
    // This function calculates the cost of a pizza
    int side_a;
    int side_b;
    int perimeter;

    // Input
    std::cout << "This program will calculate the perimeter of a Kite"
    << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the value for side_a (cm): ";
    std::cin >> side_a;
    std::cout << "Enter the value for side_b (cm): ";
    std::cin >> side_b;
    std::cout << "" << std::endl;

    // Process
    perimeter = 2 * (side_a + side_b);

    // Output
    std::cout << "Therefore the perimeter is "
    << perimeter << " cm" << std::endl;
    std::cout << "\nDone.";
}
