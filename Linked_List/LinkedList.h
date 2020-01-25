#pragma once
#include <iostream>
template <class T>

class CLinkedList
{
    private:
        CNode<T>* m_Head; //<T>是什麼意思
    
    public:
        CLinkedList(){
            m_Head = NULL;
        }
        ~CLinkedList(){
            CNode<T>* now = m_Head;
            while(now)
            {
                CNode<T>* next = now->m_Next;
			    delete now;
			    now = next;  
            }
        }

        bool AddBack(T value) {
            CNode<T>* now;
            if (!m_Head)            //當m_Head是null，此鏈為空鏈結
            {  
                m_Head = new CNode<T>;
                now = m_Head;
            }
            else 
            {
                now = m_Head;
                while (now->m_Next) //走到now的m_Next是沒有值的就離開迴圈
                    now = now->m_Next;
                now->m_Next = new CNode<T>;
                now = now->m_Next;
            }
            if (!now) return false;
            now->m_Value = value;
            return true;
        };
}