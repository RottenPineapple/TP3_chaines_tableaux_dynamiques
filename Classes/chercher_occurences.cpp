/**
 * @ Author: LORD
 * @ Create Time: 2022-10-04 16:28:10
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-11-14 16:33:53
 * @ Description: Cherche les occurences de lettres dans un prénom
 */

#include "header.hpp"

void nb_occurences()
{
    int n = 0; 
    int occ = 0;
    char *str;
    char lettre;

    cout << "Combien y'a-t'il de lettres dans votre prénom ? ";
    cin >> n;
    str = new char[n];
    cout << "Quel est votre prénom ? " << endl;
    cin >> str;
    cout << "Quelle lettre recherchez vous ? ";
    cin >> lettre;
    for (int i = 0; i < n; i++)
        cout << str[i];
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (lettre == str[i])
            occ++;
    }
    cout << "Il y a " << occ << " \"" << lettre << "\" dans \"" << str << "\".";
}