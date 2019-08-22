#include<iostream>
#include <string>
#include "my_lib.h"
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int info, Node *ptr=NULL){
        data = info;
        next = ptr;
    }

    void display(){
        cout << "Data: " << data << "\n";
        cout << "Next: " << next << "\n";
    }
};

int main()
{

    printHello();

    Node ll = Node(12);

    Node ll2 = Node(13);

    ll.next = &ll2;

    ll.display();

    return 0;
}
