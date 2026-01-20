// Copyright (c) 2025 Abdul All rights reserved.
// Created by: Abdul
// Date: December 15th, 2025
// This program calculates the average of 10 random numbers

#include <cstdlib>
#include <ctime>
#include <iostream>


int main() {
    // Initialize sum to 0 for accumulating values
    int sum = 0;
    // Maximum number of random values to generate
    int MAX_NUM_OF_VALUES = 10;
    // Maximum value for random number generation
    int MAX_NUM = 100;
    // Minimum value for random number generation
    int MIN_NUM = 0;
    // List to store the generated random numbers
    int num_list[MAX_NUM_OF_VALUES];

    // Generate random numbers and add them to the list
    srand(time(0));
    for (int loop_counter = 0; loop_counter < MAX_NUM_OF_VALUES; loop_counter++) {
        // Generate a random number between MIN_NUM and MAX_NUM
        int random_number = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
        // Append the random number to the list
        num_list[loop_counter] = random_number;
    }

    // Iterate through the list and sum all the numbers
    for (int loop_counter = 0; loop_counter < MAX_NUM_OF_VALUES; loop_counter++) {
        // Print each number as it's processed
        std::cout << num_list[loop_counter] << std::endl;
        // Add the current number to the running sum
        sum = sum + num_list[loop_counter];
    }

    // Calculate the average by dividing the sum by the count of numbers
    double average = sum / MAX_NUM_OF_VALUES;
    // Display the calculated average
    std::cout << "The average is: " << average << std::endl;
}
