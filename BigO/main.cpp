#include <iostream>

using namespace std;

// Big O: O(log n)
// Ex: [1,2,3,4,5,6,7,8] -> split in half [1,2,3,4] [5,6,7,8]
// check if the value is on the left, if not -> split the half in half again [1,2] [3,4]
// do it again, if not on the left, split it again [1] [2] -> check which one is the result
// this would be 2³ = 8 its the same as saying log₂8 = 3
// or just saying how many times I have to divide the number 8 by 2 to get down to one item.
// O(log n) is very efficient, much more than O(n), O(n²) and O(nlog n)

int main() {
}