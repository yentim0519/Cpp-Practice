#include <iostream>
#include <string>
#include <deque>

int main() {
	unsigned int i;
	std::deque <std::string> coll;
	coll.assign(3, std::string("string"));
	coll.push_back("last string");
	coll.push_front("first string");
	for (i = 0; i < coll.size(); ++i)
		std::cout << coll[i] << std::endl;
	std::cout << std::endl;
	coll.pop_front();
	coll.pop_back();
	for (i = 1; i < coll.size(); ++i)
		coll[i] = "another" + coll[i];
	coll.resize(4, "resizeed string");
	for (i = 0; i < coll.size(); ++i)
		std::cout << coll[i] << std::endl;
	return 0;
}
