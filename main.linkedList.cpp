#include <iostream>
#include "LinkedList.h"
using namespace std;

int main (int argc, char** argv){
	
	LinkedList list1;
	
	list1.insertToHead(11);
	list1.insertToHead(21);
	list1.insertToHead(31);
	list1.insertToHead(41);

	cout << "head:" << list1.head->value << endl;
	cout << "tail:" << list1.tail->value << endl;
	
	list1.printAll();
	
	LinkedList list2;
	
	list2.insertToTail(10);
	list2.insertToTail(20);
	list2.insertToTail(30);
	list2.insertToTail(40);
	list2.insertAfter(55, 2);
	
	cout << "\nhead: " << list1.head -> value << endl;
	
	list2.printAll();
		
	return 0;
}
