#pragma once

#include <iostream>
using namespace std;

template <typename E> class SLinkedList;

template <typename E>
class SNode {
private:
	E elem;
	SNode<E>* next;
	friend class SLinkedList<E>;
};

template <typename E>
class SLinkedList {
public:
	SLinkedList();
	~SLinkedList();
	bool empty() const;
	const E& front() const;
	void addFront(const E& e);
	void removeFront();
private:
	SNode<E>* head;
};

/*


*/
