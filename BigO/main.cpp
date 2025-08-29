#include <iostream>

using namespace std;

// Big O: O(a) O(b) = O(a + b)
// if the for loop is nested it should be O(a * b)
void printItems(int a, int b) {
    for (int i = 0; i < a; i++) {
        cout << i << endl;
    }

    for (int j = 0; j < b; j++) {
        cout << j << endl;
    }
}

int main() {
}