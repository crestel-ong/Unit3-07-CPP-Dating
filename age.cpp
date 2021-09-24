// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: September 2021
// This is the Dating program, in C++

#include <iostream>

int main() {
    // this function uses a try statment
    std::string integerAsString;
    int userAge;

    // input
    std::cout << "Please enter your age: ";
    std::cin >> integerAsString;

    // process and output
    try {
        userAge = std::stoi(integerAsString);

        if (userAge >= 25 && userAge <= 40) {
            std::cout << "You are accepted to date my grandchild."
            << std::endl;
        } else if (userAge < 25) {
            std::cout << "You are too young!" << std::endl;
        } else if (userAge > 40) {
            std::cout << "You are too old!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << integerAsString << " is not an integer." << std::fixed
        << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
