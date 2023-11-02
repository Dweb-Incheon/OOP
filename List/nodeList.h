#ifndef NODE_LIST_H
#define NODE_LIST_H

#include <iostream>
using namespace std;
typedef string Elem;

class Node {
	Elem elem;
	Node* prev;
	Node* next;
	friend class NodeList;
	friend class Iterator;
};

class Iterator {
public:
	Iterator(Node* u);
	Elem& operator*();
	bool operator==(const Iterator& p) const;
	bool operator!=(const Iterator& p) const;
	Iterator& operator++();
	Iterator& operator--();
	friend class NodeList;

private:
	Node* v;
};

class NodeList {
public:
	NodeList();
	~NodeList();
	int size() const;
	bool empty() const;
	Iterator begin() const;
	Iterator end() const;
	void insertFront(const Elem& e);
	void insertBack(const Elem& e);
	void insert(const Iterator& p, const Elem& e);
	void eraseFront();
	void eraseBack();
	void erase(const Iterator& p);
private:
	int n;
	Node* header;
	Node* trailer;
};

#endif
