#include <iostream>
#include "Basestack.h"
using namespace std;

int main()
{
    int size, i, pop_element, push_element;
    CBasestack <int> basestack; //還沒搞清楚template的用法
    cout << "請輸入Stack大小：" << endl;
    cin >> size;
    basestack.SetSize(size);

    for(i = 0; i < (size) + 1; ++i){   
        if(basestack.Push(i, push_element)){
            cout << "Push:" << push_element << '\t';
        }
        else{
            cout << "Stack is full!" << endl;
        }
    }
    cout << endl;
    
    if(basestack.Remove(2)){
        cout << "Remove Success" << endl;
    }
    else cout << "Position out of range" << endl;

    if(basestack.Insert(8, 72)){
        cout << "Insert Success" << endl;
    }
    else cout << "Cannot Insert" << endl;

    cout << endl;

    if(basestack.Remove(15)){
        cout << "Remove Success" << endl;
    }
    else cout << "Position out of range" << endl;

    if(basestack.Insert(8, 36)){
        cout << "Insert Success" << endl;
    }
    else cout << "Cannot Insert" << endl;

    cout << endl;

    for(i = 0; i< (size) + 1; ++i){   
        if(basestack.Pop(pop_element)){
            cout << "Pop:" << pop_element << '\t';
        }
        else{
            cout << "There's nothing in Stack!";
        }
    }

    return 0;
}