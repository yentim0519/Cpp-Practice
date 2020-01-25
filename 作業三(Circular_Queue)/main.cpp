#include "CircularQueue.h"
#include <iostream>
using namespace std;

int main() {
	int i, pop_element;
	CCircularQueue<int> CircularQueue, CircularQueue1;
	CircularQueue.SetSize(10);
	CircularQueue1.SetSize(10);
	
    for (i = 0; i < 10; ++i) 
    {
		cout << "push ";
		if (!CircularQueue.Push_back(i))
			cout << "佇列已滿;\t";
		else
			cout << i << ";\t";
	}

	cout << endl;

	for (i = 0; i < 10; ++i) 
    {   
        CircularQueue.Pop_back(pop_element);
		cout << "Pop " << pop_element << ";\t";
	}
    
    cout << endl << endl;

	for (i = 0; i < 10; ++i) 
    {
		cout << "push ";
		if (!CircularQueue.Push_front(i))
			cout << "佇列已滿;\t";
		else
			cout << i << ";\t";
	}

	cout << endl;

	for (i = 0; i < 10; ++i) 
    {
		CircularQueue1.Pop_front(pop_element);
		cout << "Pop " << pop_element << ";\t";
	}

	cout << endl << endl;
}