#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H
#include <iostream>
#include <string>
using namespace std;

typedef string Elem;

class DNode {
private:
    Elem elem;
    DNode* prev;
    DNode* next;
    friend class DLinkedList;
};

class DLinkedList {
public:
    DLinkedList();
    ~DLinkedList();
    bool empty() const;
    const Elem& front() const;
    const Elem& back() const;
    void addFront(const Elem& e);
    void addBack(const Elem& e);
    void removeFront();
    void removeBack();
    string toString() const;
private:
    DNode* header;
    DNode* trailer;
protected:
    void add(DNode* v, const Elem& e);
    void remove(DNode* v);
};
#endif // DLINKEDLIST_H
