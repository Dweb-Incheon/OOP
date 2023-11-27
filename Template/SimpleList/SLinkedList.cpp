#include "SLinkedList.h"

StringLinkedList::StringLinkedList() : head(NULL) { }
StringLinkedList::~StringLinkedList() {
	while (!empty())
		removeFront();
}
bool StringLinkedList::empty() const {
	return head == NULL;
}
const string& StringLinkedList::front() const {
	return head->elem;
}
void StringLinkedList::addFront(const string& e) {
	/*
    
    
    */
}
void StringLinkedList::removeFront() {
    /*
    
    
    */
}