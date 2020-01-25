#include"polar_sys.h"
using namespace std;

polar_sys::polar_sys(){}

polar_sys::~polar_sys(){}

void polar_sys::mirror(float first, float second)
{
  cout << "對L軸鏡射" << first << "," << 360 - second << endl;
  cout << "對假想的y軸鏡射" << first << "," << 180 - second << endl;
}
