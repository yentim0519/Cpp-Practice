#pragma once
template <class T> //template 是三小

class CBaseQueue{
    private:
        unsigned int m_Head;
        unsigned int m_Tail;
        unsigned int m_RealNum;
        unsigned int m_Size;
        T* m_Elements;

    public:
        CBaseQueue();             //Q:為什麼這裡不用加「CBaseQueue::」 A：放在class外面才要
        ~CBaseQueue();           //放class外面較好，可以讓class裡的function一次看清楚
        bool Push(T element);
        int Pop();
        bool SetSize(unsigned int size);

};

template <class T>
CBaseQueue <T>::CBaseQueue(){             
    m_Head = 0;             
    m_Tail = 0;
    m_RealNum = 0;
    m_Size = 0;
    m_Elements = NULL;   
};

template <class T>
CBaseQueue <T>::~CBaseQueue(){          
    delete [] m_Elements;
};

template <class T>
bool CBaseQueue <T>::SetSize(unsigned int size) {
		if (m_Elements) delete[] m_Elements;
		m_Elements = new T[size];
		if (!m_Elements) return false;
		m_Size = size;
		return true;
}

template <class T>
bool CBaseQueue <T>::Push(T value){  
    if (m_Tail+1 > m_Size) return false; //做個安全檢查
    m_Elements[m_Tail++] = value; // 存進去後將tail指向下一個空格
    m_RealNum++; //實際存放量+1
    return true;

};

template <class T>
int CBaseQueue <T>::Pop(){  //這邊要改bool Pop, 如何pop後用傳參考 --> 搞懂傳址、傳參考
    if(m_RealNum == 0) return 0;
    m_RealNum--;
    return m_Elements[m_Head++];

};