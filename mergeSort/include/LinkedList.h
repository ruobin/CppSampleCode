#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include "Node.h"

template<class T>
class LinkedList
{
public:

    Node<T> * head;
    Node<T> * tail;

    LinkedList(const LinkedList& LL);
    LinkedList& operator=(LinkedList byValList);
    LinkedList(): head(NULL), tail(NULL) {}
    LinkedList(Node<T> * newNode) : head(newNode), tail(newNode) {}
    ~LinkedList();

    static LinkedList<int> sumLists(const LinkedList<int>& LL1, LinkedList<int>& LL2);

    void insertToTail(int val);
    void insertToHead(T val);
    void print();
    void printBackwards();
};


#endif // LINKEDLIST_H_INCLUDED
