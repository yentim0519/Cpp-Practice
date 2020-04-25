#include <iostream>
#include "BaseQueue.h"
using namespace std;

int main()
{
    //詢問使用者Queue的大小
    //用for loop輸入value
    //用for loop輸出value
    int i, size;
    CBaseQueue <int> queue;

    cout << "請輸入要使用Queue的大小:" << endl;
    cin >> size;

    queue.SetSize(size);

    for(i=0; i<size; ++i)
    {
        queue.Push(i);
        cout << i << endl;
    }

    for(i=0; i<size; ++i)
    {   
        cout << queue.Pop() << endl;
    }
}