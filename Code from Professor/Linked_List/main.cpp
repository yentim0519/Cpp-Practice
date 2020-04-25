#include "LinkedList.h"
int main() {
	int i;
	CLinkedList<int> linkedList;
	for (i = 0; i < 2; ++i) {
		std::cout << "Add Front: " << i+10 << std::endl;
		linkedList.AddFront(i+10);
	}
	linkedList.Show();
	for (i = 0; i < 3; ++i) {
		std::cout << "Add Back: " << i << std::endl;
		linkedList.AddBack(i);
	}