#include <iostream>
using namespace std;

int main() {
    int num;
    bool seen3 = false;
    bool seen5 = false;

    while (true) {
        cout << "Enter a number (0 to quit): ";
        cin >> num;

        if (num == 0) break;

        // Track if 3 or 5 has been entered
        if (num == 3) seen3 = true;
        if (num == 5) seen5 = true;

        if (seen3 && seen5) {
            cout << "FizzBuzz" << endl;
        } else if (num == 3) {
            cout << "Fizz" << endl;
        } else if (num == 5) {
            cout << "Buzz" << endl;
        } else {
            cout << num << endl;
        }
    }

    cout << "Program ended." << endl;
    return 0;
}
