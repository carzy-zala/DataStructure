// Doubly Link List

// Que 1. Create node which is able to store the integer data and next part who store address of next node and prev part who store address of previous node

#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next; // pointer to sore address of the next node
    Node *prev; // pointer to sore address of the previous node
};

// Que 2. Creating Link List using above node

class DoublyLL
{
    Node *heading = nullptr;
    Node *tail = nullptr;

public:
    Node *getHead()
    {
        return heading;
    }

    Node *getTail()
    {
        return tail;
    }

    Node *createNode(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        newNode->prev = tail;
        cout << "Node created sucessfully ..." << endl;
        return newNode;
    }

    void addNode(Node *newNode)
    {
        if (heading == nullptr)
        {
            heading = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cout << "Node added successfully ..." << endl;
    }
};

int main()
{

    // Que 2. Adding node to link list

    DoublyLL *ll = new DoublyLL();
    ll->addNode(ll->createNode(5));
    ll->addNode(ll->createNode(10));
    ll->addNode(ll->createNode(15));
    ll->addNode(ll->createNode(20));
    ll->addNode(ll->createNode(25));
    ll->addNode(ll->createNode(30));
    ll->addNode(ll->createNode(35));
    ll->addNode(ll->createNode(40));
    ll->addNode(ll->createNode(45));
    ll->addNode(ll->createNode(50));

    // Que 3. Traversing all the nodes of link list
    Node *head = ll->getHead();

    cout << endl
         << endl
         << "Your Link List is : ";

    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }

    cout << "null";

    head = ll->getHead();

    // Que 4. Getting head and last node
    cout << endl
         << "Your first node is : " << head->data;

    cout << endl
         << "Your last node is : " << ll->getTail()->data;

    return 0;
}
