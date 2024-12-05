#pragma once 

namespace jay {
template<class T>
class LinkedList {

    struct Node {
        T val;
        struct Node *next;
        Node(T val){
            this->val = val;
            this->next = 0;
        }
    };

public:
    struct Node *head, *tail;

    LinkedList() : head(0), tail(0) {
        
    }

};
}