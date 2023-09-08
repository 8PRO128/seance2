#include <iostream>
#include <string>
using namespace std;

int main()
{
  string meilleure_musique = "";
  int plus_etoiles = 0;

  bool encore = true;
  while (encore)
  {
    string titre;
    int etoiles;

    cout << "Veuillez entrer le nom de la musique : ";
    cin >> titre;
    cout << "Veuillez entrer le score : ";
    cin >> etoiles;

    if (etoiles > plus_etoiles)
    {
      meilleure_musique = titre;
      plus_etoiles = etoiles;
    }

    cout << "Plus de données ? (o/n) ";
    string reponse;
    cin >> reponse;
    if (reponse != "o")
      encore = false;
  }

  cout << "La meilleure musique est " << meilleure_musique
       << " avec le score de : " << plus_etoiles << "\n";

  return 0;
}
