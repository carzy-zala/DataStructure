#include <iostream>
#include <vector>

using namespace std;

class Stack
{
private:
    // Que 1. Create a 1-D Stack array.
    vector<int> stack;

public:
    // Que 2.Create PUSH,POP and PEEK functions.
    void PUSH(int data)
    {

        stack.push_back(data);
    }

    void POP()
    {
        stack.pop_back();
    }

    int PEEK()
    {
        return stack[stack.size() - 1];
    }

    void getStack()
    {
        for (int i = 0; i < stack.size(); i++)
        {
            cout << "| " << stack[i] << " |" << endl;
        }
    }
};

int main()
{
    Stack *s1 = new Stack();
    // Que 3. Add at least 5 element to Stack with PUSH function.
    s1->PUSH(1);
    s1->PUSH(2);
    s1->PUSH(3);
    s1->PUSH(4);
    s1->PUSH(5);

    cout << "Whole stack is below :" << endl;

    s1->getStack();
    // Que 4. Remove at least 2 element from stack array using POP function.
    s1->POP();
    s1->POP();

    cout << "Whole stack is below :" << endl;

    s1->getStack();
    // Que 5. Display PEEK element.

    cout << "PEEK element is : " << s1->PEEK() << endl;
    


    return 0;
}
