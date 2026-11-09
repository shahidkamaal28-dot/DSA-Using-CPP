#include<iostream>
using namespace std;
#include "lab08.h"

int main() {

    // TEST 1: Insert at Front
    DoublyLinkedList list1;
    list1.addElementnthpos(2, 1);
    list1.display();

    list1.addElementBack(10);
    list1.addElementBack(20);
    list1.addElementBack(30);

    list1.addElementFront(5);

    cout << "Insert at Front: ";
    list1.display();


  



    return 0;
}