#pragma once
#include "Node.h"
template <class T>

class CDoubleCircularLinkedList
{
private:
	CNode<T>* m_Head;
	CNode<T>* m_Tail;
public:
	CDoubleCircularLinkedList() {
		m_Head = NULL;
		m_Tail = NULL;
	};
	~CDoubleCircularLinkedList() {
		CNode<T>* now = m_Head;
		while (now) {
			CNode<T>* next = now->m_Next;
			delete now;
            
            if(now == m_Tail){
                now = now->m_Next;
                break;
            }   
			now = next;
		}
	};

    void Show() {
        CNode<T>* now = m_Head;
        while (now) {
            std::cout << now->m_Last << " - ";
            std::cout << now->m_Value << " - ";
            std::cout << now->m_Next << std::endl;

            if(now == m_Tail){
                now = now->m_Next;
                break;
            }

            now = now->m_Next;
        }
        std::cout << std::endl;
    };

    bool AddBack(T value) {
        if (!m_Tail && !m_Head) {
            m_Head = new CNode<T>;
            if (!m_Head) return false;
            m_Head->m_Value = value;
            m_Tail = m_Head;
            m_Head->m_Last = m_Head;  //自己接到自己
            m_Head->m_Next = m_Head; 
        }
        else {
            m_Tail->m_Next = new CNode<T>;
            if (!m_Tail->m_Next) return false;
            m_Tail->m_Next->m_Last = m_Tail; 
            m_Tail = m_Tail->m_Next;
            m_Tail->m_Next = m_Head; //這邊尾巴接到頭
            m_Tail->m_Value = value;
            m_Head->m_Last = m_Tail; //這邊頭連接到尾巴
        }
        return true;
    };

    bool AddFront(T value) {
		if (!m_Tail && !m_Head) {
			m_Head = new CNode<T>;
			if (!m_Head) return false;
			m_Head->m_Value = value;
			m_Tail = m_Head;
			m_Head->m_Last = m_Head;
			m_Head->m_Next = m_Head;
		} else {
			CNode<T>* addItem = new CNode<T>;
			addItem->m_Value = value;
			addItem->m_Last = m_Tail;
			addItem->m_Next = m_Head;
			m_Head->m_Last = addItem;
			m_Head = addItem;
            m_Tail->m_Next = m_Head;
		}
		return true;
	};

    void Remove(unsigned int position) {
		unsigned int i;
		CNode<T>* now = m_Head;
		for (i = 0; i < position; ++i) {
			now = now->m_Next;
		}

        if(now == m_Head){
            CNode<T>* deleteItem = now;
            m_Head = deleteItem->m_Next;
            deleteItem->m_Last->m_Next = deleteItem->m_Next;
            deleteItem->m_Next->m_Last = deleteItem->m_Last;
            delete deleteItem;
        }
        else if(now == m_Tail){
            CNode<T>* deleteItem = now;
            m_Tail = deleteItem->m_Last;
            deleteItem->m_Last->m_Next = deleteItem->m_Next;
            deleteItem->m_Next->m_Last = deleteItem->m_Last;
            delete deleteItem;
        }
        else{
            CNode<T>* deleteItem = now;
            deleteItem->m_Last->m_Next = deleteItem->m_Next;
            deleteItem->m_Next->m_Last = deleteItem->m_Last;
            delete deleteItem;
        }
	};

    bool Insert(unsigned int position, T value) {
		unsigned int i;
		if (!m_Tail && !m_Head) {
			m_Head = new CNode<T>;
			if (!m_Head) return false;
			m_Head->m_Value = value;
			m_Tail = m_Head;
			m_Head->m_Last = m_Head;
			m_Head->m_Next = m_Head;
		}
        else {
			CNode<T>* now;
			if (position == 0)	AddFront(value);
			else {
				now = m_Head;
				for (i = 0; i < position - 1; ++i)
					now = now->m_Next;
				CNode<T>* insertItem = new CNode<T>;
				if (!insertItem) return false;
				insertItem->m_Value = value;
				insertItem->m_Last = now;
				insertItem->m_Next = now->m_Next;
				insertItem->m_Last->m_Next = insertItem;
				insertItem->m_Next->m_Last = insertItem;

                if(now == m_Tail){
                    m_Tail = now->m_Next;
                }

			}
		}
		return true;
	};
};

