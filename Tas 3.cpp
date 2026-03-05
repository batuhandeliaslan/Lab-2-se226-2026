#include <iostream>

int main() {
    int n;
    std::cout << "Please enter a number between 3 and 9: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) std::cout << "*";
        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; --i) {
        for (int j = 0; j < i; ++j) std::cout << "*";
        std::cout << std::endl;
    }

    return 0;
}