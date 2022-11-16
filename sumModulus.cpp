// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 11 - 16 - 22
// This program gets numbers within user chosen range divisible by 3 or 5
// and sums them up.

#include <iostream>

int main() {
    // Defining variables
    std::string maxRangeNumStr;
    int maxRangeNum;
    int newInt = 0;
    int loopCount;
    float maxRangeNumFloat;

    // The program's description.
    std::cout << "This program gets a range from ";
    std::cout << "the user and adds all multiples of 3 and 5.\n " << std::endl;


    // Input and try catch for invalid numbers.
    try {
        std::cout << "What is the range from 0?: ";
        std::cin >> maxRangeNumStr;
        maxRangeNum = stoi(maxRangeNumStr);
        maxRangeNumFloat = stof(maxRangeNumStr);

        if (maxRangeNum <= 0) {
            std::cout << "Please enter a positive range. (e.g 5)\n";
            std::cout << "Restarting...\n" << std::endl;
            return main();
        }

        // Checking if the input is a decimal. (We hate decimals)
        if (maxRangeNumFloat != maxRangeNum) {
            std::cout << "Your input is not a whole number. (e.g 15)\n";
            std::cout << "Restarting..." << std::endl;
            return main();
        }
    } catch (std::invalid_argument) {
        std::cout << "Your input is not an integer. (e.g 15)";
    }

    // This is the main loop, it increments by one and checks if
    // The number is divisible by 3 or 5 and then adds it to the next number.
    for (int loopCount = 0; loopCount < maxRangeNum; loopCount++) {
        if (loopCount % 3 == 0 || loopCount % 5 == 0) {
            std::cout << loopCount << " + " << newInt << " = "
            << loopCount + newInt << std::endl;
            newInt += loopCount;
        }
        if (loopCount >= maxRangeNum) {
            break;
        }
    }
}
