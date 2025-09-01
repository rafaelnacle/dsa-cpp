#include <iostream>;

using namespace std;

// When any of the LikedList class methods need to create a node
// they will call on the Node class to do that.
class Node {
   public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        next = nullptr;
    }
};

class LinkedList {
   private:
    Node* head;
    Node* tail;
    int length;

   public:
    // Create new Node
    LinkedList(int value) {
        // On the left side we are creating a variable that CAN point to a node.
        // On the right side the new keyword will run the constructor, creating a Node
        // Everything on the right side is what actually create a Node.
        // The equal sign is what makes the pointer point to the new Node created.
        Node* newNode = new Node(value);
        // Head is going to point to the same Node as newNode
        head = newNode;
        tail = newNode;
        length = 1;
    };

    // Create new Node, add Node to end
    void append(int value) {
    }
    // Create new Node, add Node to beginning
    void prepend(int value) {};

    // Create new Node, insert Node.
    bool insert(int index, int value) {};
};

int main() {
    LinkedList* myLinkedList = new LinkedList(4);

    return 0;
}
