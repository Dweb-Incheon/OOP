#ifndef SLINKED_LIST_H // avoid repeated expansion : #ifndef means "if not defined"
#define SLINKED_LIST_H

#include <string>
#include <iostream>
using namespace std;

class StringNode {
private:
	string elem;
	StringNode* next;

	friend class StringLinkedList;
};

class StringLinkedList {
public:
	StringLinkedList();
	~StringLinkedList();
	bool empty() const;
	const string& front() const;
	void addFront(const string& e);
	void removeFront();
private:
	StringNode* head;
};
#endif