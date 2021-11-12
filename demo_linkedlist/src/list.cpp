#include "list.h"

Node::Node(const int &key) 
{
    // TODO
}
Node::Node() 
{
    // TODO
}
Node::~Node() 
{
    cout << "delete [" << key << "]" << endl;
    // TODO: delete next if next != NULL
}

LList::LList()
{
    // TODO
}
bool LList::isEmpty() const 
{
    // TODO
}
void LList::insert(const int &key)
{
    // TODO
    // create a new Node n with key

    // if empty list then head = n
    // else get last Node m, assign next of m to n
}

Node* LList::delete()
{
    // if 0 element
    if (isEmpty()) throw "Error: Delete empty list!";
    // if 1 element
    if (head->next == NULL)
    {
        Node *n = head;
        head = NULL;
        return n;
    }
    // more than 1 element
    // find n - the node before the last
    Node *n = head;
    while (n->next->next != NULL) n = n->next;

    // TODO: release the last node m from n
    return m;
}

Node* LList::last() const
{
    // TODO:
    // throw error if list is empty

    Node *n = head;
    // loop until n->next == NULL then return n
}

void LList::print() const 
{
    // if empty, print []
    Node *n = head;
    // TODO: print n->key, loop until n->next == NULL
    // Output should be something like this: [1]->[2]->[5]->[]
}

LList::~LList()
{
    // delete head if it is not NULL then set head to NULL
}