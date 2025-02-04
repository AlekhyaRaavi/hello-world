#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to print prime numbers in a given range
void printPrimes(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << ": ";
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num, start, end;
    
    // Checking if a number is prime
    cout << "Enter a number to check if it is prime: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    
    // Printing prime numbers in a range
    cout << "Enter the range (start and end): ";
    cin >> start >> end;
    printPrimes(start, end);
    
    return 0;
}
