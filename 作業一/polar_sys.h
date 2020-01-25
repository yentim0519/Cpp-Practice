#include "coordinate_sys.h"

class polar_sys : public coordinate_sys
{
public:
  polar_sys();
  ~polar_sys();
  void mirror(float first, float second);
};