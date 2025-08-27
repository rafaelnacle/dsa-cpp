#include <iostream>

using namespace std;

// Big O: Drop Non-Dominants
// O(n² + n)
// n² -> dominant term
// n -> non dominant term (we drop the n because its insignificant)
void printItems(int n) {
    // O(n²)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << j << endl;
        }
    }

    // O(n)
    for (int k = 0; k < n; k++) {
        cout << k << endl;
    }
}

int main() {
    printItems(10);
}