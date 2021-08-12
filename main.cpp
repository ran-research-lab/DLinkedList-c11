#include <iostream>
#include "dlinkedlist.h"
using namespace std;

// Variables and macros for assertions, DO NOT CHANGE ****
int totalAssertions = 0;
int passedAssertions  = 0;
#define expect( chk )  \
    totalAssertions++; \
    if (!(chk)) \
    printf("\x1B[31mAssertion (%s) failed %s at line %d\033[0m\t\t\n", #chk, __FILE__,__LINE__); \
    else { \
    printf("\x1B[32mPassed line %d: %s\033[0m\t\t\n", __LINE__, #chk); \
    passedAssertions++; \
    }
#define assertionReport() { \
    printf("==========================================\n"); \
    printf("Passed %d of %d assertions\n",passedAssertions,totalAssertions); \
    printf("\n"); \
    }
//*******************************************************

// An external function that reverses the double linked list
void listReverse(DLinkedList& L) {
    DLinkedList T;
    while (!L.empty()) {
        string s = L.front(); T.addFront(s);
        L.removeFront();
    }
    while (!T.empty()) {
        string s = T.front();
        T.removeFront();
        L.addBack(s);
    }
}


int main()
{
    DLinkedList D;
    D.addFront("uno");
    D.addBack("dos");
    D.addBack("tres");
    D.addFront("zero");

    expect(D.toString() == "zero uno dos tres ");
    listReverse(D);
    expect(D.toString() == "tres dos uno zero ");
    listReverse(D);

    D.removeBack();
    expect(D.toString() == "zero uno dos ");
    D.removeFront();
    expect(D.toString() == "uno dos ");

    return 0;
}
