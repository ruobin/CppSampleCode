#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED


template<class T>
class Node
{
public:
    T data;
    Node<T> * next;
    Node<T>(const T& d):data(d), next() {}
    Node<T>(const Node<T>& copyNode) : data(copyNode.data), next() {}

private:
    Node<T>& operator=(const Node<T>&);
};


#endif // NODE_H_INCLUDED
