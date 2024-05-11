#include "linked_list.h"
#include <iostream>
// TODO: LinkedList 클래스 구현 작성
LinkedList::LinkedList() {
    head_ = nullptr;
    size_ = 0;
}
LinkedList::~LinkedList() {
    Node *node;
    while (head_->next_ != nullptr) {
        node = head_;
        head_ = head_->next_;
        delete node;
    }
    delete head_;
}
void LinkedList::print() {
    Node *node = head_;


    while (node->next_ != nullptr) {
        std::cout << node->value_ << " ";
        node = node->next_;

    }

    std::cout << node->value_ << std::endl;

}

void LinkedList::insert(int index, int value) {
    Node *newNode = new Node(value);
    int count = 1;
    Node *node = head_;
    Node *nextNode = nullptr;
    if (index == 0) {
        head_ = newNode;
        newNode->next_ = node;
        size_++;
        return;
    }
    while (count < index) {
        node = node->next_;
        count++;
    }
    if (node->next_ == nullptr) {
        node->next_ = newNode;
    } else {
        nextNode = node->next_;
        node->next_ = newNode;
        newNode->next_ = nextNode;
    }
    size_++;
}
int LinkedList::get(int index) {

    int count = 0;
    Node *node = head_;
    while (count < index) {
        node = node->next_;
        count++;
    }
    return node->value_;
}
void LinkedList::remove(int index) {
    int count = 0;
    Node *node = head_;
    Node *subNode;
    while (count < index) {
        subNode = node;
        node = node->next_;
        count++;
    }
    if (index == 0) {
        head_ = node->next_;
        delete node;
    } else {
        subNode->next_ = node->next_;
        delete node;
    }
    size_--;
}