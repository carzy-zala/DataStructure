#include <iostream>
#include <vector>

using namespace std;

class Queue
{
private:
    // Que 1. Create a 1-D Queue array.
    vector<int> queue;

public:
    // Que 2. Create ENQUEUE,DEQUEUE and PEEK functions.
    void ENQUEUE(int data)
    {
        queue.push_back(data);
    }

    void DEQUEUE()
    {
        if (queue.begin() != queue.end())
        {
            queue.erase(queue.begin());
        }
        else
        {
            cout << "Queue is empty ..";
        }
    }

    int PEEK()
    {
        return *queue.begin();
    }

    void display()
    {
        cout << "->";
        for (auto it = queue.begin();
             it != queue.end(); it++)
        {
            cout << *it << "->";
        }

        cout << "NULL" << endl;
    }
};

int main()
{
    Queue *q1 = new Queue();
    // Que 3. Add at least 5 element to Queue with ENQUEUE function.
    q1->ENQUEUE(1);
    q1->ENQUEUE(2);
    q1->ENQUEUE(3);
    q1->ENQUEUE(4);
    q1->ENQUEUE(5);

    // Que 4. Display whole QUEUE.
    cout << "Your queue is : " << endl;
    q1->display();

    // Que 5. Remove at least 2 element from queue array using DEQUEUE function.
    q1->DEQUEUE();
    q1->DEQUEUE();
    cout << "Now your queue is : " << endl;
    q1->display();

    // Que 6. Display PEEK element.
    cout << "Your PEEK element is : " << q1->PEEK();

    return 0;
}