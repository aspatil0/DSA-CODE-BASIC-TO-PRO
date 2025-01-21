#include <iostream>
using namespace std;

// Function to draw the pattern of each number
void drawNumberPattern(int num) {
    switch (num) {
        case 1:
            cout << "   *\n";
            cout << "  **\n";
            cout << "   *\n";
            cout << "   *\n";
            cout << "  ***\n";
            break;

        case 2:
            cout << "  ***\n";
            cout << "     *\n";
            cout << "  ***\n";
            cout << "  *\n";
            cout << "  ***\n";
            break;

        case 3:
            cout << "  ***\n";
            cout << "     *\n";
            cout << "  ***\n";
            cout << "     *\n";
            cout << "  ***\n";
            break;

        case 4:
            cout << "  *  *\n";
            cout << "  *  *\n";
            cout << "  *****\n";
            cout << "     *\n";
            cout << "     *\n";
            break;

        case 5:
            cout << "  *****\n";
            cout << "  *\n";
            cout << "  ****\n";
            cout << "     *\n";
            cout << "  ****\n";
            break;

        default:
            cout << "Invalid number\n";
            break;
    }
}

int main() {
    for (int i = 1; i <= 5; ++i) {
        drawNumberPattern(i);
        cout << "\n"; // Add space between patterns
    }

    return 0;
}
