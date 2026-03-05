#include <iostream>
using namespace std;

int main() {
    int n = 0;
    
    while (n < 10 || n > 100) {
        cout << "Please enter a number between 10 and 100: ";
        cin >> n;
        if (n < 10 || n > 100) {
            cout << "Invalid input. ";
        }
    }

    int fizz_count = 0;
    int buzz_count = 0;
    int fizzbuzz_count = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            continue;
        }

        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
            fizzbuzz_count++;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
            fizz_count++;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
            buzz_count++;
        } else {
            cout << i << endl;
        }
    }

    cout << "--- Summary ---" << endl;
    cout << "Fizz count : " << fizz_count << endl;
    cout << "Buzz count : " << buzz_count << endl;
    cout << "FizzBuzz count: " << fizzbuzz_count << endl;

    return 0;
}