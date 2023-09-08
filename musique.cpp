#include <iostream>
using namespace std;

class Musique
{
  public:
    string titre;
    int etoiles;
};

int main()
{
  Musique m1;
  Musique m2 = Musique();

  m1.titre = "Moonlight Sonata";
  m1.etoiles = 3;
  
  
  cout << m1.titre << " a une score de : " 
                    << m1.etoiles << endl;
  return 0;
}
