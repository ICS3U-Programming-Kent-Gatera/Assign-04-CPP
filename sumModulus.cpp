// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 11 - 16 - 22
// This program gets a number and adds up all the numbers leading up to it.

#include <iostream>

int main() {
    // Defining variables
    std::string userNumStr;
    int userNum;
    int newInt = 0;
    int loopCount;
    float userNumFloat;

    // The program's description.
    std::cout << "This program gets a range from ";
    std::cout << "the user and adds all multiples of 3 and 5.\n " << std::endl;
    std::cout << "The while loop does not stop,";
    std::cout << " I dont know it is broken so pls run the code in replit\n";

    // Input and try catch for invalid numbers.
    try {
        std::cout << "What is the range from 0?: ";
        std::cin >> userNumStr;
        userNum = stoi(userNumStr);
        userNumFloat = stof(userNumStr);

        if (userNum <= 0) {
            std::cout << "Please enter positive range. (e.g 5)\n";
            std::cout << "Restarting...\n"
                      << std::endl;
            return main();
        }

        // Checking if the input is a decimal. (We hate decimals)
        if (userNumFloat != userNum) {
            std::cout << "Your input is not a whole number. (e.g 15)\n";
            std::cout << "Restarting..." << std::endl;
            return main();
        }
    } catch (std::invalid_argument) {
        std::cout << "Your input is not an Integer. (e.g 15)";
    }
    // This is the main loop, it increments by one and checks if
    // The number is divisible by 3 or 5 and then adds it to the next number.

    // This loop works on repl.it so I assume codespace is broken.
    do {
        for (int loopCount = 0; loopCount < userNum; loopCount++) {
            if (loopCount % 3 == 0 || loopCount % 5 == 0) {
              std::cout << loopCount << " + " << newInt << " = "
              << loopCount + newInt << std::endl;
              newInt += loopCount;
            }
        }
    } while (loopCount != userNum);
}
