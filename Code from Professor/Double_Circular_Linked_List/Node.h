#pragma once
#include <iostream>
template <class T>
class CNode
{
public:
	CNode() {
		m_Next = NULL;
		m_Last = NULL;
	};
	~CNode() {};

	T m_Value;
	CNode<T>* m_Next;
	CNode<T>* m_Last;
};