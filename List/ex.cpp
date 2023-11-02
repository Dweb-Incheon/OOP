#include "nodeList.h"

int main() {
	NodeList L;
	L.insertBack("8");
	L.insertBack("3");
	L.insertBack("2");
	Iterator p = L.begin();
	++p;
	L.erase(p);
	p = L.end();
	--p;
	L.erase(p);

	L.insertBack("5");

	cout << "True/False : " << (p == L.begin()) << endl;

	for (Iterator i = L.begin(); i != L.end(); ++i)
		cout << "Node Value : " << (*i) <<endl;
	
	p = L.begin();
	L.insert(p, "3");
	p = L.begin();
	*p = "7";

	cout << endl;
	for (Iterator i = L.begin(); i != L.end(); ++i)
		cout << "Node Value : " << (*i) << endl;

	p = L.begin(); ++p;
	L.erase(p);

	cout << endl;
	for (Iterator i = L.begin(); i != L.end(); ++i)
		cout << "Node Value : " << (*i) << endl;

	return EXIT_SUCCESS;
}