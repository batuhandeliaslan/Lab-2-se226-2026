#include <iostream>

int main() {
    long long n; 
    int steps = 0;

    std::cout << "Please enter a positive integer greater than 1: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "Lutfen 1'den buyuk bir sayi giriniz." << std::endl;
        return 0;
    }

    std::cout << n;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        std::cout << " -> " << n;
        steps++;
    }

    std::cout << "\nTotal steps: " << steps << std::endl;

    return 0;
}
    
