/**
 * @ Author: LORD
 * @ Create Time: 2022-10-04 15:36:57
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-11-14 16:33:50
 * @ Description: capitalize and decapitalize
 */

#include "header.hpp"

void capitalize_decapitalize()
{
    char a;

    cout << "Tapez un caractère : ";
    cin >> a; 
    if (a >= 97 && a <= 122) {
        a -= 32;
        cout << "Vous avez saisi une minuscule." << endl;
        cout << "La majuscule correspondante est " << a;
    } else if (a >= 65 && a <= 90) {
        a += 32;
        cout << "Vous avez saisi une majuscule." << endl;
        cout << "La minuscule correspondante est " << a;
    } else {
        cout << "Vous n'avez pas saisi une lettre" << endl;     
    }
}