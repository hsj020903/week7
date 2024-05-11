#ifndef QUEUE_H
#define QUEUE_H
#include "Linked_list.h"

using namespace std;

class Queue : public LinkedList {
  public:
    void push(int);
    int peek();
    int pop();

    void operator+=(int);
};

#endif