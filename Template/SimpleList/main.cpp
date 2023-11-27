#include "SLinkedList.h"
#include <iostream>

int main() {
	StringLinkedList L;

	L.addFront("Incheon National University");
	L.addFront("Dweb");

	cout << L.front() <<endl;
	cout << L.empty() << endl;
	L.removeFront();
	cout << L.front() << endl;

}