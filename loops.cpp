#include <iostream>
using namespace std;

int main() {
    // For Loop Example
    cout << "Using for loop to print numbers 1 to 5:\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // While Loop Example
    cout << "Using while loop to print numbers 5 to 1:\n";
    int count = 5;
    while (count > 0) {
        cout << count << " ";
        count--;
    }
    cout << "\n\n";

    // Do-While Loop Example
    cout << "Using do-while loop to print numbers 1 to 5:\n";
    int num = 1;
    do {
        cout << num << " ";
        num++;
    } while (num <= 5);
    cout << "\n\n";

    // Nested Loop Example
    cout << "Using nested loops to print a 3x3 grid of asterisks:\n";
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n";

    // Infinite Loop Example (commented for safety)
    /*
    cout << "Infinite loop example (uncomment to test):\n";
    while (true) {
        cout << "This loop runs forever! Use CTRL+C to stop it.\
