#include <iostream>
#include <string>
using namespace std;

class Livre
{
public:
	string titre;
	string auteur;
	int pages;

	void display()
	{
		cout << "Livre 1: " << titre << ", " << auteur << ", " << pages << " pages." << endl;
	}
};

int main()
{
	Livre l1, l2;

	cout << "Veuillez entrer le titre, l'auteur et nombre de pages du livre: ";
	cin >> l1.titre >> l1.auteur >> l1.pages;

	cout << "Veuillez entrer le titre, l'auteur et nombre de pages du livre: ";
	cin >> l2.titre >> l2.auteur >> l2.pages;

	l1.display();
	l2.display();

	return 0;
}