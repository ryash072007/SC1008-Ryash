#include <iostream>
using namespace std;
struct MarkNode
{
    int mark; // Changed to int
    MarkNode *next;
};
// Function to insert a node at the end of the linked list
void insertNode2ListEnd(MarkNode *&head, int newValue)
{
    MarkNode *newNode = new MarkNode;
    newNode->mark = newValue;
    newNode->next = nullptr;
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    MarkNode *temp = head;
    while (temp->next != nullptr)
    { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // Link last node to new node
}
void destroyList(MarkNode *&head)
{
    MarkNode *nodePtr = head; // Start at head of list
    MarkNode *garbage = nullptr;
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
// Function to get the value of the n-th node
int getNthNodeValue(const MarkNode *head, int n)
{
    // TO-DO: WRITE Your code here
    const MarkNode *curr = head;
    for (int i = 0; i < n-1; i++){
        curr = curr->next;
        if (curr == nullptr){
            return -1;
        }
    }

    return curr->mark;

}
int main()
{
    MarkNode *head = nullptr; // Initialize an empty linked list

    int size;
    cout << "Enter size of list:" << endl;
    cin >> size;
    cout << "Enter elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        insertNode2ListEnd(head, value);
    }

    while (true)
    {
        cout << "Enter n: " << endl;
        int n;
        cin >> n;
        if (n == -1)
            break;
        cout << getNthNodeValue(head, n) << endl;
    }

    // Clean up memory
    destroyList(head);
    return 0;
}