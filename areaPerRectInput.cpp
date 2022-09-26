// Copyright (c) 2022 Spencer Scarlett All rights reserved.
//
// Created by: Spencer Scarlett
// Created on: Sept 25,2022
// This program asks the user for the length
// This is a program for calculating the area and perimeter of a rectangle
// but with user input and in C++!
#include <iostream>

// declare variables
float length, width, area, perimeter;

int main() {
    // get input from user
    std::cout << "This is to calculate the area and perimeter of a rectangle\n";
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;

    // calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // display the results to the user
    std::cout << std::endl;
    std::cout << "Area = " << area << " cm^2.\n";
    std::cout << "Perimeter = " << perimeter << "cm.\n";
}
