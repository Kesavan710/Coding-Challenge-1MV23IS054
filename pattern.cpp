#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int stars = 2 * i + 1;
        int spaces = n - i - 1;
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
