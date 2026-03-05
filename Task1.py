def main():
    n = int(input("Please enter a positive integer greater than 1: "))

    if n <= 1:
        print("Lütfen 1'den büyük bir sayı giriniz.")
        return

    steps = 0
    print(n, end="")

    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        
        print(" ->", n, end="")
        steps = steps + 1
    
    print("\nTotal steps:", steps)

if __name__ == "__main__":
    main()