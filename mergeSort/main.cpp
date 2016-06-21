#include <iostream>
#include <set>
#include "include/LinkedList.h"

Node<int>* Merge (Node<int>* head1, Node<int>* head2)
{

    Node<int>* outputListHead = NULL;
    Node<int>* outputListCurrent = NULL;

    Node<int>* current1 = head1;
    Node<int>* current2 = head2;

    while (current1 != NULL && current2 != NULL) {

        if (current1->data < current2->data) {
            if (outputListCurrent == NULL) {
                outputListHead = current1;
                outputListCurrent = current1;
            }else
            {
                outputListCurrent->next = current1;
                outputListCurrent = current1;
            }

            current1 = current1->next;
        }else
        {
            if (outputListCurrent == NULL) {
                outputListHead = current2;
                outputListCurrent = current2;
            }else
            {
                outputListCurrent->next = current2;
                outputListCurrent = current2;
            }

            current2 = current2->next;
        }
    }

    if (current1 == NULL) {
        outputListCurrent->next = current2;
    }else if(current2 == NULL){
        outputListCurrent->next = current1;
    }

    return outputListHead;
}


void test(){
    LinkedList<int> LL1(new Node<int>(7));
    LL1.insertToTail(1);
    LL1.insertToTail(6);
    LL1.insertToTail(5);
    LL1.insertToTail(4);

    LinkedList<int> LL2(new Node<int>(5));
    LL2.insertToTail(9);
    LL2.insertToTail(2);

    LinkedList<int> LL = LL1.sumLists(LL1, LL2);
    LL.print();
    LL2.print();
    LL = LL2;
    LL.print();
    LL2.print();
}


int main(int argc, const char * argv[]) {
    // insert code here...
    Node<int>* node1 = new Node<int>(1);
    std::cout << "Hello, World!\n";
    test();
    return 0;
}



