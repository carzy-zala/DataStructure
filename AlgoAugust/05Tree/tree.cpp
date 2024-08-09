#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Que 1. Create node that store integer as data and have two child left and right as node.

class Node
{
private:
    int data;
    Node *left;
    Node *right;

public:
    Node(int data, Node *left, Node *right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }

    int getNode()
    {
        return this->data;
    }

    Node *getLeft()
    {
        return this->left;
    }

    Node *getRight()
    {
        return this->right;
    }

    void addToLeft(Node *newNode)
    {
        this->left = newNode;
    }

    void addToRight(Node *newNode)
    {
        this->right = newNode;
    }
};

// Que 2. Implement the Tree using it.

class Tree
{
private:
    Node *root = nullptr;

public:
    // Que 3. Add methods to Add nodes according to the rules of binary tree.

    void addNode(int data, Node *left = nullptr, Node *right = nullptr)
    {

        Node *newNode = new Node(data, left, right);
        if (!this->root)
        {
            this->root = newNode;
        }
        else
        {
            addNode(this->root, newNode);
        }
    }

    void addNode(Node *node, Node *newNode)
    {

        if (node->getNode() < newNode->getNode())
        {
            if (!node->getLeft())
            {
                node->addToLeft(newNode);
                return;
            }
            addNode(node->getLeft(), newNode);
        }
        else
        {
            if (!node->getRight())
            {
                node->addToRight(newNode);
                return;
            }
            addNode(node->getRight(), newNode);
        }
    }

    // Que 4. Add method to get root node.

    int getRootNodeValue()
    {
        return this->root->getNode();
    }

    Node *getRootNode()
    {
        return this->root;
    }

    // Que 9. Create method for Inorder Traversal

    void inorder(Node *node)
    {
        if (!node)
            return;
        inorder(node->getLeft());
        cout << node->getNode() << " ";
        inorder(node->getRight());
    }

    // Que 10. Create method for Preorder Traversal

    void preorder(Node *node)
    {
        if (!node)
            return;

        cout << node->getNode() << " ";
        preorder(node->getLeft());
        preorder(node->getRight());
    }

    // Que 11. Create method for Postorder Traversal

    void postorder(Node *node)
    {
        if (!node)
            return;

        postorder(node->getLeft());
        postorder(node->getRight());
        cout << node->getNode() << " ";
    }

    void getLeafNode(Node *node)
    {
        if (!node->getLeft() && !node->getRight())
        {
            cout << node->getNode() << " ";
            return;
        }
        if (node->getLeft())
            getLeafNode(node->getLeft());
        if (node->getRight())
            getLeafNode(node->getRight());
    }

    void getInternalNode(Node *node)
    {
        if (!node->getLeft() && !node->getRight())
        {
            return;
        }
        cout << node->getNode() << " ";
        if (node->getLeft())
            getInternalNode(node->getLeft());
        if (node->getRight())
            getInternalNode(node->getRight());
    }
};

/*
               10
         11           6
     15           7       3
17       13    9
*/

int main()
{
    Tree *t1 = new Tree();
    // Que 5. Add at least 3 to 4 node to it’s root and also add some children nodes this nodes.
    t1->addNode(10);
    t1->addNode(11);
    t1->addNode(15);
    t1->addNode(6);
    t1->addNode(7);
    t1->addNode(9);
    t1->addNode(3);
    t1->addNode(17);
    t1->addNode(13);

    // Que 6. Display root nodes.
    cout << "Root Node is : " << t1->getRootNodeValue() << endl;

    // Que 7. Display the all internal nodes.
    cout << "INTERNAL NODE :: ";
    t1->getInternalNode(t1->getRootNode());
    cout << endl;

    // Que 8. Display the all leaf nodes.
    cout << "LEAF NODE :: ";
    t1->getLeafNode(t1->getRootNode());
    cout << endl;

    // Que 9. Display nodes using Inorder Traversal
    cout << "INORDER :: ";
    t1->inorder(t1->getRootNode());
    cout << endl;

    // Que 10. Display nodes using Preorder Traversal
    cout << "PRERDER :: ";
    t1->preorder(t1->getRootNode());
    cout << endl;

    // Que 11. Display nodes using Postorder Traversal
    cout << "POSTORDER :: ";
    t1->postorder(t1->getRootNode());
    cout << endl;

    return 0;
}