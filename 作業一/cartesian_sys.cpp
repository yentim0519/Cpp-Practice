#include "cartesian_sys.h"
using namespace std;

cartesian_sys::cartesian_sys(){}

cartesian_sys::~cartesian_sys(){}

void cartesian_sys::mirror(float first, float second)
{
  cout << "對x軸鏡射" << first << ", " << -second << endl;
  cout << "對y軸鏡射" << -first << ", " << second << endl;
}
