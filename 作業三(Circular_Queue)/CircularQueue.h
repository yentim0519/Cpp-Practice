#pragma once
#include <iostream>
template <class T>

class CCircularQueue
{
private:
	unsigned int m_Size;
	unsigned int m_Head;
	unsigned int m_Tail;
	unsigned int m_RealNum;
	T* m_Elements;

public:
	CCircularQueue();
	~CCircularQueue();
	bool SetSize(unsigned int size); 
    bool Push_back(T value); 
    bool Pop_front(int& pop_element);
    bool Push_front(T value);
    bool Pop_back(int& pop_element);
};

template <class T>
CCircularQueue <T>::CCircularQueue(){             
    m_Head = 0;             
    m_Tail = 0;
    m_RealNum = 0;
    m_Size = 0;
    m_Elements = NULL;   
};

template <class T>
CCircularQueue <T>::~CCircularQueue(){ 
    delete[] m_Elements;
}

template <class T>
bool CCircularQueue <T>::SetSize(unsigned int size) { 
    if (m_Elements) delete[] m_Elements;
	m_Elements = new T[size];
	if (!m_Elements) return false;
	m_Size = size;
	return true;
}

template <class T>
bool CCircularQueue <T>::Push_back(T value){
    if (m_RealNum == m_Size) return false;
	
    if (m_Tail + 1 > m_Size) {
		m_Tail = m_Tail - m_Size;
		m_Elements[m_Tail++] = value;
	} 
    else m_Elements[m_Tail++] = value;
	
    m_RealNum++;
	return true;
}

template <class T>
bool CCircularQueue <T>::Pop_front(int& pop_element){
    if (m_RealNum == 0) return false;
	m_RealNum--;
	
    if (m_Head + 1 > m_Size) {
		m_Head = m_Head - m_Size;
		pop_element = m_Elements[m_Head++];
        return true;
	} 
    else 
    {
        pop_element = m_Elements[m_Head++];
        return true;
    }
}

template <class T>
bool CCircularQueue <T>::Push_front(T value){
    if (m_RealNum == m_Size) return false;
        
    if (m_Head == 0) {
        m_Head = m_Size;
        m_Elements[--m_Head] = value;
    } 
    else m_Elements[--m_Head] = value;
        
    m_RealNum++;
    return true;
}

template <class T>
bool CCircularQueue <T>::Pop_back(int& pop_element){
    if (m_RealNum == 0) return false;
	m_RealNum--;
	
    if (m_Tail == 0) {
		m_Tail = m_Size;
		pop_element = m_Elements[--m_Tail];
        return true;
	} 
    else 
    {
        pop_element = m_Elements[--m_Tail];
        return true;
    }
}





