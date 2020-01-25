#ifndef A_H    //寫了這個就不會重複呼叫
#define A_H
#pragma once
// #include <string>
#include <iostream>

class coordinate_sys {
public:
    coordinate_sys();
    virtual ~coordinate_sys();
    virtual void mirror(float first, float second); //這邊的virtual可以讓使用者用到子類別的mirror
    float first;
    float second;
};

#endif