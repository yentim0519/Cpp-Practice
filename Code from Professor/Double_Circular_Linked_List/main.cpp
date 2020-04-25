#include "DoubleCircularLinkedList.h"
using namespace std;

int main() {
	int i;
	CDoubleCircularLinkedList<int> doubleCircularLinkedList;
	for (i = 0; i < 3; ++i) {
		std::cout << "Add Back: " << i << std::endl;
		doubleCircularLinkedList.AddBack(i);
	}

	doubleCircularLinkedList.Show();

	for (i = 0; i < 3; ++i) {
		std::cout << "Add Front: " << i+10 << std::endl;
		doubleCircularLinkedList.AddFront(i+10);
	}

	doubleCircularLinkedList.Show();
	doubleCircularLinkedList.Insert(6, 3333);
	doubleCircularLinkedList.Show();
	doubleCircularLinkedList.Remove(6);
	doubleCircularLinkedList.Show();
	return 0;
}