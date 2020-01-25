# pragma once
template <class T>

class CBasestack
{   
    private:
            unsigned int m_Size;
            unsigned int m_End;
            T* m_Element;

    public:
        CBasestack(){   // 建構子和解構子到底在幹嘛？
            m_Size = 0;
            m_End = 0;  //永遠指向最後一個元素的下一個空間
            m_Element = NULL;
        };

        ~CBasestack(){
            delete[] m_Element; //不是很懂
        };

    
        bool SetSize(int size){
            if(m_Element) delete m_Element;
            m_Element = new T[size];
            if (!m_Element) return false;
            m_Size = size;
            return true;
        };

        bool Push(T value, T &push_element){
            if(m_End == m_Size) return false;
            m_Element[m_End++] = value;
            push_element = value;
            return true;
        };

        bool Pop(int& pop_element){ // 用傳參考可以回傳兩個以上的值
            if(m_End == 0) return false; //沒有東西可以pop了
            pop_element = m_Element[--m_End];
            return true; //要怎麼區別0是element還是false？
        };

        bool Insert(int position, T value){
            if(position >= m_Size) return false; //插入的地方不能超過預設的size
            if(m_End == m_Size) return false; //滿了就不能insert
            
            if(position > m_End) //若插入的位置超過m_End就插入在m_End的位置
            {
                m_Element[m_End++] = value; 
                return true;
            }
            else
            {
                int i;
                for(i = (m_End) - 1; i >= position; --i){
                    m_Element[i+1] = m_Element[i];
                }
                m_Element[position] = value;
                m_End++; //新增了一個m_End要往後移一個
                return true;
            }
        }; 

        bool Remove(int position){
            if(position >= m_End) return false; //不能去除沒有存東西的位置

            int i;
            for(i = position; i < m_End; ++i){
                m_Element[i] = m_Element[i+1];
            }
            m_End--;
            return true;
        }

};
