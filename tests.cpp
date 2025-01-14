/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 13 juin 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"
#include "forme.h"
#include "cercle.h"
#include "carre.h"
#include "rectangle.h"

void Tests::tests_unitaires_formes()
{
	
	
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
}

void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_couche();
   tests_unitaires_vecteur();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
	Canevas *pc = new Canevas;
  	cout << "TESTS APPLICATION (CAS 01)" << endl; 
	cout << "Etape 1:" << endl;
	ostream& os = cout;
	pc->afficher(os);
	cout << "Etape 2: Aire totale = " << pc->aire() << endl;
	cout << "Etape 3: Ajouter 5 couches au canevas" << endl;
	pc->ajouterCouche(new Couche);
	pc->ajouterCouche(new Couche);
	pc->ajouterCouche(new Couche);
	pc->ajouterCouche(new Couche);
	pc->ajouterCouche(new Couche);
	cout << "Etape 4: " << endl;
	pc->afficher(os);
	cout << "Etape 5: Aire totale = " << pc->aire() << endl;
	cout << "Etape 6: Activer couche 2" << endl;
	pc->activerCouche(2);
	pc->ajouterCercle(5,0,1);
	pc->ajouterCarre(6,1,2);
	pc->ajouterRectangle(4,9,2,3);
	cout << "Etape 7: Activer couche 1" << endl;
	pc->activerCouche(1);
	pc->ajouterRectangle(12,3,0,0);
	cout << "Etape 8: Afficher canevas" << endl;
	pc->afficher(os);
	cout << "Etape 9: Aire Totale = " << pc->aire() << endl;
	cout << "Etape 10: Activer couche 0" << endl;
	pc->activerCouche(0);
	pc->ajouterRectangle(1,1,0,0);
	pc->ajouterCarre(1,0,0);
	pc->ajouterCercle(1,0,0);
	cout << "Etape 11: Activer couche 2" << endl;
	pc->activerCouche(2);
	pc->translationCouche(2,1);
	cout << "Etape 12: Afficher canevas" << endl;
	pc->afficher(os);
	cout << "Etape 13: Afficher aire: " << pc->aire() << endl;
	cout << "Etape 14: Activer couche 0" << endl;
	pc->retirerForme(2);
	cout << "Etape 15: Reinitialiser couche 1" << endl;
	pc->reinitialiserCouche(1);
	cout << "Etape 16: Activer couche 2" << endl;
	pc->activerCouche(2);
	cout << "Etape 17: Enlever couche 2" << endl;
	pc->enleverCouche(2);
	cout << "Etape 18: Activer couche 4" << endl;
	pc->activerCouche(4);
	cout << "Etape 19: Afficher canevas" << endl;
	pc->afficher(os);
	cout << "Etape 20: Afficher aire: " << pc->aire() << endl;
	cout << "Etape 21: Reinitialiser Canevas" << endl;
	pc->reinitialiserCanevas();
	cout << "Etape 22: Afficher canevas" << endl;
	pc->afficher(os);
	cout << "Etape 23: Afficher Aire: " << pc->aire() << endl;
	cout << "Etape 24: Activer couche 3" << endl;
	pc->ajouterCarre(10,10,10);
	pc->ajouterForme(NULL);
	cout << "Etape 25: Activer couche 6" << endl;
	pc->activerCouche(6);
	cout << "Etape 26: Afficher Canevas" << endl;
	pc->afficher(os);
	cout << "Etape 27: Afficher aire: " << pc->aire() << endl;
	 
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
