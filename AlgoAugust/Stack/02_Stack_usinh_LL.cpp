#include <iostream>

using namespace std;
// Que 1. Create a node that has data field which is able to store the integer data and next part who store address of next node.
class Node
{
public:
    int data;
    Node *next;
};

// Que 2. Create a stack using above declare node.
class Stack
{
private:
    Node *heading = NULL;
    Node *top = NULL;
    Node *createNode(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }

public:
    // Que 3. Add PUSH,POP and PEEK methods for it.
    void PUSH(int data)
    {

        Node *newNode = createNode(data);
        if (!heading)
        {
            heading = newNode;
            top = newNode;
        }
        else
        {
            top->next = newNode;
            top = newNode;
        }
    }

    void POP()
    {
        Node *head = heading;

        while (head->next->next)
        {
            head = head->next;
        }

        head->next = NULL;
        Node *deletedNode = top;
        top = head;

        delete (deletedNode);
    }

    int PEEK()
    {
        return top->data;
    }

    void getStack()
    {
        Node *head = heading;
        while (head)
        {
            cout << "| " << head->data << " |" << endl;
            head = head->next;
        }
    }
};

int main()
{
    Stack *s1 = new Stack();
    // Que 4. Add at least 5 elements to it using PUSH method.
    s1->PUSH(11);
    s1->PUSH(12);
    s1->PUSH(13);
    s1->PUSH(14);
    s1->PUSH(15);

    cout << "Stack : " << endl;
    s1->getStack();
    cout << "Top of stack after PUSH operation is  : " << s1->PEEK() << endl;

    // Que 5. Remove at least 2 element from it using POP method.
    s1->POP();
    s1->POP();

    cout << "Stack after POP: " << endl;
    s1->getStack();
    cout << "Top of stack after POP is  : " << s1->PEEK() << endl;

    // Que 6. Return PEEK element ( i.e. Top element ).
    cout << "Top of stack is  : " << s1->PEEK();

    return 0;
}