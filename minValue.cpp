// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: April 22, 2025
// This program generates 10 random numbers and finds
// the min value with a for..in loop

#include <array>
#include <cstdlib>  // Cstandlibrary
#include <ctime>
#include <iostream>  // For std

// Constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

// Function to find the minimum value using a for..in-style loop
int findMinValue(const std::array<int, MAX_ARRAY_SIZE>& numbers) {
    int minValue = numbers[0];
    for (int num : numbers) {
        if (num < minValue) {
            minValue = num;
        }
    }
    return minValue;  // Returns minValue number from array
}
// Main function
int main() {
    std::array<int, MAX_ARRAY_SIZE> randomNumbers;

    // Use rand_r instead of rand
    unsigned int seed = static_cast<unsigned int>(time(NULL));

    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        randomNumbers[i] = (rand_r(&seed) % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
    }

    std::cout << "Random numbers: ";
    for (int num : randomNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    // Display values with message
    int minValue = findMinValue(randomNumbers);
    std::cout << "Minimum value: " << minValue << std::endl;
    // Return 0 back to console
    return 0;
}
