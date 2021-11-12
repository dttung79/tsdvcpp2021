#pragma once

class Node
{
    public:             // should change to private
        int key;
        Node *next;
    public:
        Node();                 // key = 0, next = NULL
        Node(const int &key);   // asign key, next = NULL
        ~Node();                // delete next if next != NULL
};

class LList
{
    public:             // should change to private
        Node *head; 
    public:
        LList();                     // head = NULL
        bool isEmpty() const;        // check if head is NULL
        void insert(const int &key); // insert new Node with key at the end
        Node* delete();              // extract the last Node from list and return it
        void print() const;          // print list from the begining
        ~LList();                    // delete head
    private:
        Node* last() const;          // return last node
};