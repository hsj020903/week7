#ifndef STACK_H
#define STACK_H
#include "Linked_list.h"
#include <iostream>
using namespace std;
class Stack : public LinkedList
{
public:
    void push(int);
    int peek();
    int pop();

    void operator+= (int);
    
};
#endif