#include "queue.h"

void Queue::push(int value){
    LinkedList::insert(size_, value);
}
int Queue::peek(){
    return LinkedList::get(0);

}
int Queue::pop(){
    int val = LinkedList::get(0);
    LinkedList::remove(0);
    return val;
}

void Queue::operator+=(int value){
    LinkedList::insert(size_, value);
}