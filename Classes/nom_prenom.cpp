/**
 * @ Author: vlagard@btslivh.eu
 * @ Create Time: 2022-11-28 15:12:32
 * @ Modified by: Valentin LAGARD
 * @ Modified time: 2022-11-28 16:22:49
 * @ Description:
 */

#include "header.hpp"
#include <string.h>
#include <vector>

using namespace std;

void nom_prenom()
{
    string prenom_nom;
    char str[15];
    char a;

    cout << "Quels sont vos prenom et nom ? : ";
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
        
    cout << endl << "Je m'appelle : ";
    for (int i = 0; prenom_nom[i] != '\0'; i++)
        cout << prenom_nom.at(i);
    cout << endl << "En ajoutant au nom la premiere lettre du prenom, cela donne : ";
    prenom_nom.push_back(prenom_nom.at(0));
    for (int i = 0; prenom_nom[i] != '\0'; i++)
        cout << prenom_nom.at(i);
    prenom_nom.pop_back();
    cout << endl << "Pour l'état civil, je m'appelle : ";
    for (auto i = prenom_nom.cbegin(); i != prenom_nom.cend(); i++)
        cout << *i;
    cout << endl;
}