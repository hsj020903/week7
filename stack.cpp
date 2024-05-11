#include "stack.h"
void Stack::push(int value){
    LinkedList::insert(0, value);
}
int Stack::peek(){
    
    return LinkedList::get(0);

}
int Stack::pop(){
    int val = LinkedList::get(0);
    LinkedList::remove(0);
    return val;
}

void Stack::operator+=(int value){
    LinkedList::insert(0, value);
}