#include <iostream>

int main() {
    // Task 1
    long long n1;
    std::cout << "Please enter a positive integer greater than 1: ";
    std::cin >> n1;

    if (n1 > 1) {
        int steps1 = 0;
        std::cout << n1;
        while (n1 != 1) {
            if (n1 % 2 == 0) n1 /= 2;
            else n1 = 3 * n1 + 1;
            std::cout << " -> " << n1;
            steps1++;
        }
        std::cout << "\nTotal steps: " << steps1 << "\n\n";
    }

    // Task 2
    int n2;
    do {
        std::cout << "Please enter a number between 10 and 100: ";
        std::cin >> n2;
        if (n2 < 10 || n2 > 100) std::cout << "Invalid input. ";
    } while (n2 < 10 || n2 > 100);

         int f = 0, b = 0, fb = 0;
    for (int i = 1; i <= n2; i++) {
        if (i % 7 == 0) continue;

        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
            fb++;
        } else if (i % 3 == 0) {
            std::cout << "Fizz" << std::endl;
            f++;
        } else if (i % 5 == 0) {
            std::cout << "Buzz" << std::endl;
            b++;
        } else {
            std::cout << i << std::endl;
        }
    }

    std::cout << "--- Summary ---" << std::endl;
    std::cout << "Fizz count : " << f << std::endl;
    std::cout << "Buzz count : " << b << std::endl;
    std::cout << "FizzBuzz count: " << fb << std::endl;

    return 0;
}

