#include <string>
#include <iostream>
using namespace std;

class Button
{
  public:
    string label;
    string color;

    void setLabel(string l)
    {
      label = l;
    }

    void setColor(string c)
    {
      color = c;
    }

    void click()
    {
      cout << "Button clicked" << endl;
    } 
};

int main()
{
  Button button = Button();
  
  button.setLabel("Press me");
  button.setColor("red");
  button.click();

  return 0;
}