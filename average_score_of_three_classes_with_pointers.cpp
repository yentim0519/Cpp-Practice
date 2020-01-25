#include <iostream>

int main()
{
  int*** score; /*設一個三維指標*/
  int n = 3, people = 4, subject = 3;

  score = new int**[n]; /*開一個存放班級的空間*/

  for(int i=0, i<n, ++i)  /*將每班學生的資料存進去*/
  {
    int class_sum = 0;
    cout << "請輸入班級" << i+1 << "成績" << endl;
    score[i] = new int*[people];
    for(int j = 0; j<people, ++j)
    {

    }
  }

}
