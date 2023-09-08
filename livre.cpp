#include <iostream>
#include <string>
using namespace std;

class Livre
{
public:
	string titre;
	string auteur;
	int pages;
};

int main()
{
	Livre l1, l2;

	cout << "Veuillez entrer le titre, l'auteur et nombre de pages du livre: ";
	cin >> l1.titre >> l1.auteur >> l1.pages;

	cout << "Veuillez entrer le titre, l'auteur et nombre de pages du livre: ";
	cin >> l2.titre >> l2.auteur >> l2.pages;

	cout << "Livre 1: " << l1.titre << ", " << l1.auteur << ", " << l1.pages << " pages." << endl;
	cout << "Livre 2: " << l2.titre << ", " << l2.auteur << ", " << l2.pages << " pages." << endl;
	
	return 0;
}