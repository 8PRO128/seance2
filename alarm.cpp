#include <iostream>
using namespace std;

class Alarm
{
  public:
    string time;

  void setTime(string t)
  {
    time = t;
  }

  string getTime()
  {
    return time;
  }
};

int main()
{
  Alarm alarm = Alarm();
  
  alarm.setTime("12:00");
  cout << alarm.getTime() << endl;
  
  alarm.setTime("13:00");
  cout << alarm.getTime() << endl;
  return 0;
}