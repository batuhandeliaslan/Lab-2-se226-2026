
import sys

def main():
    # Task 1: Hailstone Sequence
    n_hailstone = int(input("Please enter a positive integer greater than 1: "))
    
    if n_hailstone > 1:
        steps_hailstone = 0
        current = n_hailstone
        print(current, end="")
        
        while current != 1:
            if current % 2 == 0:
                current //= 2
            else:
                current = 3 * current + 1
            print(f" -> {current}", end="")
            steps_hailstone += 1
        print(f"\nTotal steps: {steps_hailstone}\n")

    # Task 2: FizzBuzz Counter
    while True:
        n_fizz = int(input("Please enter a number between 10 and 100: "))
        if 10 <= n_fizz <= 100:
            break
        print("Invalid input. ", end="")

    fizz_c = 0
    buzz_c = 0
    fizzbuzz_c = 0

    for i in range(1, n_fizz + 1):
        if i % 7 == 0:
            continue
        
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz")
            fizzbuzz_c += 1
        elif i % 3 == 0:
            print("Fizz")
            fizz_c += 1
        elif i % 5 == 0:
            print("Buzz")
            buzz_c += 1
        else:
            print(i)

    print("--- Summary ---")
    print(f"Fizz count : {fizz_c}")
    print(f"Buzz count : {buzz_c}")
    print(f"FizzBuzz count: {fizzbuzz_c}")

if __name__ == "__main__":
    main()