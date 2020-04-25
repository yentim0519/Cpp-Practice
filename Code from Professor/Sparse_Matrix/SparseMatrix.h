#pragma once
#include "Element.h"
#include <iostream>
template <class T>
class CSparseMatrix
{
private:
	unsigned int m_m;
	unsigned int m_n;
	unsigned int m_Num; //實際非零元素數量
	unsigned int m_RealSize; //可容納元素數量
	CElement<T>* m_Elements;  
public:
	CSparseMatrix(int m = 0, int n = 0) { 
		m_n = n;
		m_Num = 0;
		m_RealSize = 0;
		m_Elements = NULL;
	};

  ~CSparseMatrix() {
		delete[] m_Elements;
	};

  bool SetElement(unsigned int i, unsigned int j, T value) {
  		if (i >= m_m || j >= m_n) return false;
  		if (m_RealSize == 0) {
  			m_Elements = new CElement<T>[20];
  			if (!m_Elements) return false; 
  			m_RealSize = 20;
  			m_Elements[0].m_i = i;
  			m_Elements[0].m_j = j;
  			m_Elements[0].m_Value = value;
  			m_Num = 1;
  		}
  		else if (m_RealSize > 0 && m_Num == m_RealSize) {
  			CElement<T>* elements = new CElement<T>[m_RealSize + 20];
  			if (!elements) return false;
  			memcpy(elements, m_Elements, sizeof(CElement<T>)*m_RealSize); 
  			delete[] m_Elements;
  			m_Elements = elements;
  			m_Elements[m_RealSize].m_i = i;
  			m_Elements[m_RealSize].m_j = j;
  			m_Elements[m_RealSize].m_Value = value;
  			m_RealSize += 20;
  			m_Num++;
  		}

      else if (m_RealSize > 0 && m_Num < m_RealSize) {
			m_Elements[m_Num].m_i = i;
			m_Elements[m_Num].m_j = j;
			m_Elements[m_Num].m_Value = value;
			m_Num++;
		}
		return true;
	};
	void ShowList() {
		unsigned int i;
		std::cout << "Matrix Size: " << m_m << "*" << m_n << std::endl;
		for (i = 0; i < m_Num; ++i) {
			std::cout << "<" << m_Elements[i].m_i << ", " << m_Elements[i].m_j << ", "
				<< m_Elements[i].m_Value << ">" << std::endl;
		}
	};
};
