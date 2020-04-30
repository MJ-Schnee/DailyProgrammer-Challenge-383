#include <iostream>
#include <string>

bool compareNecklaces(std::string input1, std::string input2) {
    // Length check
    if (input1.length() != input2.length())
        return false;

    // Loop through for the number of letters
    for (std::string::size_type i = 0; i < input1.length(); i++) {
        if (input1.compare(input2) == 0)
            return true;

        // Take the last letter of the input and append the substring up till then to it
        input1 = input1[input1.length() - 1] + input1.substr(0, input1.length() - 1);
    }

    return false;
}

int repeats(std::string input) {
    // Create a copy of the original input
    std::string originalInput{ input };

    int numRepeats{ 0 };

    // Loop through for the number of letters
    for (std::string::size_type i = 0; i < input.length(); i++) {
        // Take the last letter of the input and append the substring up till then to it
        input = input[input.length() - 1] + input.substr(0, input.length() - 1);

        if (input.compare(originalInput) == 0)
            numRepeats++;
    }

    return numRepeats;
}

int main() {
    std::string input1{ "" }, input2{ "" };

    // Comparing two necklaces
    /*

    std::cout << "Please enter the first necklace: ";
    std::cin >> input1;

    std::cout << "Please enter the second necklace: ";
    std::cin >> input2;

    if (compareNecklaces(input1, input2))
        std::cout << "These are the same necklace\n";
    else
        std::cout << "These are NOT the same necklace\n";
    */

    // Checking for repeats
    std::cout << "What does the bead necklace say? ";
    std::cin >> input1;

    std::cout << "That repeats " << repeats(input1) << " time(s)\n";

    return 0;
}
