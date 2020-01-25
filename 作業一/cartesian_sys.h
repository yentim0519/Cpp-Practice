#pragma once
#include "coordinate_sys.h"

class cartesian_sys : public coordinate_sys
{
public:
    cartesian_sys();
	~cartesian_sys();
    void mirror(float first, float second);
};