#include "iostream"
#include "coordinate_sys.h"
#include "cartesian_sys.h"
#include "polar_sys.h"
using namespace std;


int main()
{ 
    coordinate_sys* the_system;
    int first, second;
    char choose_system;
    cout << "請選擇要使用的座標系統(cartesian按c/polar按p)"<< endl;
    cin >> choose_system >> first >> second;
    
    switch(choose_system) {
    case 'c':
        the_system = new cartesian_sys;
        break;
    
    case 'p':
        the_system = new polar_sys;
        break;
    }
    
    the_system->mirror(first, second);
    return 0;         

}
