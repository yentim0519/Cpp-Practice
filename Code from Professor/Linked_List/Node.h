#pragma once
#include <iostream>
template <class T>

class CNode
{   
    public:
        CNode(){
            m_Next = NULL;
        };
        ~CNode(){};
        T m_Value;
        CNode* m_Next;

}