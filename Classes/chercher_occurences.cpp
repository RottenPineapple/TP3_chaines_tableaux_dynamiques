/**
 * @ Author: LORD
 * @ Create Time: 2022-10-04 16:28:10
 * @ Modified by: Valentin LAGARD
 * @ Modified time: 2022-11-27 21:40:12
 * @ Description: Cherche les occurences de lettres dans un prénom
 */

#include "header.hpp"

void nb_occurences()
{
    int n = 0; 
    int occ = 0;
    char *str;
    char lettre;

    std::cout << "Combien y'a-t'il de lettres dans votre prénom ? ";
    std::cin >> n;
    str = new char[n];
    std::cout << "Quel est votre prénom ? " << std::endl;
    std::cin >> str;
    std::cout << "Quelle lettre recherchez vous ? ";
    std::cin >> lettre;
    for (int i = 0; i < n; i++)
        std::cout << str[i];
    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        if (lettre == str[i])
            occ++;
    }
    std::cout << "Il y a " << occ << " \"" << lettre << "\" dans \"" << str << "\"." << std::endl;
}