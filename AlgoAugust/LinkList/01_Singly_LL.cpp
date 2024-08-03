// Singly Link List

// Que 1. Create node which is able to store the integer data and next part who store address of next node

#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next; // pointer to sore address of the next node
};

// Que 2. Creating Link List using above node

class SinglyLL
{
    Node *heading = nullptr;

public:
    Node *getHead()
    {
        return heading;
    }

    Node *createNode(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        cout << "Node created sucessfully ..." << endl;
        return newNode;
    }

    void addNode(Node *newNode)
    {
        if (heading == nullptr)
        {
            heading = newNode;
        }
        else
        {

            Node *head = heading;
            while (head->next)
            {
                head = head->next;
            }
            head->next = newNode;
        }
        cout << "Node added successfully ..." << endl;
    }
};

int main()
{

    // Que 2. Adding node to link list

    SinglyLL *ll = new SinglyLL();
    ll->addNode(ll->createNode(5));
    ll->addNode(ll->createNode(10));
    ll->addNode(ll->createNode(15));
    ll->addNode(ll->createNode(20));
    ll->addNode(ll->createNode(25));

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

    while (head->next)
    {
        head = head->next;
    }

    cout << endl
         << "Your last node is : " << head->data;

    return 0;
}
