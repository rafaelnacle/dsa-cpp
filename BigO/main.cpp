#include <iostream>

using namespace std;

// Big O: O(1)
// even if you have n + n + n which technically is O(2) we simplify it to O(1)
// This is the most efficient Big O possible.
int addItems(int n) {
    return n + n + n;
}

int main() {
    addItems(10);
}