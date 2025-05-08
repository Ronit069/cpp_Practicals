#include <iostream>
#include <vector>
#include <algorithm> // for std::reverse

int main() {
    std::vector<int> numbers;
    int input;

    std::cout << "Enter integers (enter -1 to stop): ";
    while (std::cin >> input && input != -1) {
        numbers.push_back(input);
    }

    // Reversing using std::reverse
    std::reverse(numbers.begin(), numbers.end());

    std::cout << "Reversed sequence (using std::reverse): ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
