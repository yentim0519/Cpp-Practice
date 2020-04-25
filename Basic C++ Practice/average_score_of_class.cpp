#include <iostream>
using namespace std;

// main() 是程序开始执行的地方

int main()
{
   int a[10] = {};
   for(int i = 0; i<10; ++i)
   {
     cin >> a[i];
   }

   int b = 0;
   for(int i = 0; i<10; ++i)
   {
     b = b + a[i];
   }

   cout << b/10 << endl;

   return 0;
}
