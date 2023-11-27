#include "SLinkedList.h"
#include <string>
#include <iostream>

int main() {
	SLinkedList<string> a;
	a.addFront("Incheon National University");
	a.addFront("Dweb");

	cout << a.front() <<endl;
	cout << a.empty() << endl;
	a.removeFront();
	cout << a.front() << endl;

	SLinkedList<int> b;
	b.addFront(100);
	b.addFront(101);
	cout << b.front() <<endl;
	cout << b.empty() << endl;

	return 0;
}