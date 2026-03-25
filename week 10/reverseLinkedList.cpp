#include <iostream>
#include <string>
using namespace std;

struct StringNode
{
    string name;
    StringNode *next;
};

void destroyList(StringNode *&head)
{
    StringNode *nodePtr = head; // Start at head of list
    StringNode *garbage = nullptr;

    while (nodePtr != nullptr)
    {
        // garbage keeps track of node to be deleted
        garbage = nodePtr;
        // Move on to the next node, if any
        nodePtr = nodePtr->next;
        // Delete the "garbage" node
        delete garbage;
        garbage = nullptr;
    }
    head = nullptr;
}

void printLinkedList(const StringNode *head)
{
    const StringNode *current = head;
    while (current != nullptr)
    {
        cout << current->name;
        if (current->next != nullptr)
        {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

void insertNode2ListEnd(StringNode *&head, const string &newName)
{
    StringNode *newNode = new StringNode;
    newNode->name = newName;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    StringNode *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
// Function to reverse the linked list
void reverseLinkedList(StringNode *&head)
{
    StringNode *prev = nullptr;
    StringNode *current = head;

    while (current != nullptr)
    {
        StringNode *nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    head = prev;
}
int main()
{
    StringNode *head = nullptr; // Initialize an empty linked list

    cout << "1) Insert node" << endl;
    cout << "2) Print List" << endl;
    cout << "3) Reverse List" << endl;
    cout << "4) Exit" << endl;

    int cmd;
    do
    {
        cout << "Enter command: " << endl;
        cin >> cmd;
        switch (cmd)
        {
        case 1:
        {
            string value;
            cin >> value;
            insertNode2ListEnd(head, value);
        }
        break;
        case 2:
            printLinkedList(head);
            break;
        case 3:
            cout << "Reversing List" << endl;
            reverseLinkedList(head);
            break;
        case 4:
            break;
        default:
            cout << "Unknown cmd: " << cmd << endl;
        }
    } while (cmd != 4);

    destroyList(head);
    return 0;
}