#include <iostream>
#include <string>
using namespace std;

class Musique
{
  public:
    string titre;
    int etoiles;
};

int main()
{
  Musique meilleure_musique;
  meilleure_musique.titre = "";
  meilleure_musique.etoiles = 0;

  bool encore = true;
  while (encore)
  {
    Musique musique;

    cout << "Veuillez entrer le nom de la musique : ";
    cin >> musique.titre;
    cout << "Veuillez entrer le score : ";
    cin >> musique.etoiles;

    if (musique.etoiles > meilleure_musique.etoiles)
    {
      meilleure_musique = musique;
    }

    cout << "Plus de données ? (o/n) ";
    string reponse;
    cin >> reponse;
    if (reponse != "o")
      encore = false;
  }

  cout << "La meilleure musique est " << meilleure_musique.titre
       << " avec le score de : " << meilleure_musique.etoiles << "\n";

  return 0;
}
