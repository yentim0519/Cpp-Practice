#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{   
    vector <string> sentence; // 宣告一個vector
    sentence.reserve(5);
    sentence.push_back("Hello, ");
    sentence.push_back("how");
	sentence.push_back("are");
	sentence.push_back("you");
	sentence.push_back("?");
    
    for(int i = 0; i<sentence.size(); ++i) cout << sentence[i] << endl; //將push進去的element印出來
    cout << endl; //空一行
    cout << "Max_size(): " << sentence.max_size() << endl;
    cout << "size(): " << sentence.size() << endl;
    cout << "capacity(): " << sentence.capacity() << endl;
    cout << endl;
    swap(sentence[1], sentence[3]); //將第1和第3個element交換
    for (int i = 0; i < sentence.size(); ++i) std::cout << sentence[i] << " ";
    sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always"); //這行不懂
    for (int i = 0; i < sentence.size(); ++i) std::cout << sentence[i] << " ";


}