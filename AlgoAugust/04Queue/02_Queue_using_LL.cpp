#include <iostream>
#include <vector>

using namespace std;

// Que 7. Create a node that has data field which is able to store the integer data and next part who store address of next node.
class Node
{
private:
    int data;
    Node *next;

public:
    Node(int value)
    {
        data = value;
        next = NULL;
    }

    void addNext(Node *next)
    {
        this->next = next;
    }

    Node *getNext()
    {
        return this->next;
    }

    int getData()
    {
        return this->data;
    }
};

// Que 8. Create a Queue using above declare node.
class Queue
{
private:
    Node *front;
    Node *rear;

public:
    // que 9. Add ENQUEUE,DEQUEUE and PEEK methods for it.

    void ENQUEUE(int data)
    {
        Node *newNode = new Node(data);

        if (!front && !rear)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->addNext(newNode);
            rear = newNode;
        }
    }

    void DEQUEUE()
    {
        cout << this->front->getData() << " deleted succesfully .." << endl;
        Node *deleteNode = this->front;
        this->front = this->front->getNext();
        delete (deleteNode);
    }

    int PEEK()
    {
        return this->front->getData();
    }

    void display()
    {
        Node *head = this->front;

        cout << "->";
        while (head)
        {
            cout << head->getData() << "->";
            head = head->getNext();
        }
        cout << "NULL" << endl;
    }
};

int main()
{

    Queue *q1 = new Queue();
    // Que 10. Add at least 5 elements to it using PUSH method.
    q1->ENQUEUE(1);
    q1->ENQUEUE(2);
    q1->ENQUEUE(3);
    q1->ENQUEUE(4);
    q1->ENQUEUE(5);

    cout << "Your queue is : " << endl;
    q1->display();

    // Que 10. Remove at least 2 element from it using DEQUEUE method.
    q1->DEQUEUE();
    q1->DEQUEUE();

    // Que 11. Return PEEK element ( i.e. Top element ).

    cout << "Your PEEK element is : " << q1->PEEK();

    return 0;
}