#include <iostream>
using namespace std;

// main() 是程序开始执行的地方

int main()
{
   int i, j, k;
   float a[3][4][3] = {};
   for(i = 0; i<3; ++i)
   {
     float one_class_score = 0;
     for(j = 0; j<4; ++j)
     {
       float one_student_total_score = 0;
       for(k = 0; k<3; ++k)
       {
         cin >> a[i][j][k];
         one_student_total_score = one_student_total_score + a[i][j][k];
       }
       cout << "第" << i+1 << "班，第" << j+1 << "位學生的平均成績是："
       << one_student_total_score/3 << endl;
       one_class_score = one_class_score + one_student_total_score/3;
     }
     cout << "第" << i+1 << "班的平均成績是："
     << one_class_score/4 << endl;
   }

   return 0;
}
