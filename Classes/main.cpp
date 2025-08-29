#include <iostream>

using namespace std;

// Class overview

// Classes will be useful for LinkedList
/* class LinkedList {
    LinkedList(int value) {}
    void append(int value) {}
    Node* removeLast() {}
    void prepend(int value) {}
    bool insert(int index, int value) {}
    Node* remove(int index) {}
} */

class Cookie {
   private:
    string color;

   public:
    // constructor
    Cookie(string color) {
        this->color = color;
    }
    string getColor() {
        return color;
    }
    void setColor(string color) {
        this->color = color;
    }
};

int main() {
    Cookie* cookieOne = new Cookie("green");
    Cookie* cookieTwo = new Cookie("blue");

    cookieOne->setColor("yellow");

    cout << "C1: " << cookieOne->getColor() << endl;
    cout << "C2: " << cookieTwo->getColor() << endl;
}
