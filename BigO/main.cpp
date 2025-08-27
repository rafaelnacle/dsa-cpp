#include <iostream>

using namespace std;

// n * n = n² -> O(n²)
// It is a lot less efficient than O(n)
void printItems(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << j << endl;
        }
    }
}

int main() {
    printItems(10);
}